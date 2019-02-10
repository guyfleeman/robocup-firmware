#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>

#include "pins.h"

void init() {
    // disable interrupts
    cli();

    // disable watchdog
    wdt_reset();
    WDTCR |= (_BV(WDTOE) | _BV(WDE));
    WDTCR = 0x00;

    SFIOR |= _BV(PUD);

    // config status LEDs and set ERR/WARN until init done
    DDRD |= _BV(MCU_GREEN);
    DDRD |= _BV(MCU_YELLOW);
    DDRD |= _BV(MCU_RED);

//    PORTD &= ~(_BV(MCU_YELLOW));
    PORTD &= ~(_BV(MCU_RED));

    // configure core io
//    DDRB |= _BV(KICK_MISO_PIN);
//    DDRB &= ~(_BV(N_KICK_CS_PIN) | _BV(KICK_MOSI_PIN));

    // configure hv mon
    DDRA &= ~(_BV(V_MONITOR_PIN));
    DDRA |= (_BV(HV_IND_MAX) | _BV(HV_IND_HIGH) | _BV(HV_IND_MID) | _BV(HV_IND_LOW) | _BV(HV_IND_MIN));
    PORTA &= (_BV(HV_IND_MAX) | _BV(HV_IND_HIGH) | _BV(HV_IND_MID) | _BV(HV_IND_LOW) | _BV(HV_IND_MIN));

   // configure LT3751 
//    DDRD |= _BV(LT_CHARGE);
//    DDRD &= ~(_BV(LT_DONE_N) | _BV(LT_FAULT_N));

    // configure ball sense
    DDRD |= (_BV(BALL_SENSE_TX) | _BV(BALL_SENSE_LED));
    PORTD &= ~(_BV(BALL_SENSE_LED));
    DDRA &= ~(_BV(BALL_SENSE_RX));

    // configure debug
    DDRC &= ~(_BV(DB_SWITCH) | _BV(DB_CHG_PIN) | _BV(DB_KICK_PIN) | _BV(DB_CHIP_PIN));
//    if (PINC & _BV(DB_SWITCH))
//        PORTD &= ~(_BV(MCU_YELLOW));

    // configure SPI
//    SPCR = _BV(SPE) | _BV(SPIE);
//    SPCR &= ~(_BV(MSTR));  // ensure we are a slave SPI device


    ///////////////////////////////////////////////////////////////////////////
    //  TIMER INITIALIZATION
    //
    //  The timer works by interrupt callback. The timer is based off of an
    //  accumulator register that is incremented per clock tick. When the
    //  accumulator register reaches the value in the target register,
    //  the interrupt fires.
    //
    //  Initialization
    //  1) The interrupt enable bit is set in TIMSK0
    //  2) Clear the bit indicating timer matched the target/compare register
    //  3) Set the value of the target/compare register
    //
    //  Callback
    //  ISR(TIMER0_COMPA_vect)
    //
    //  Start/Global
    //  kick()
    //
    //  initialize timer
//    TIMSK |= _BV(OCIE0);    // Interrupt on TIMER 0
//    TCCR0 |= _BV(COM01);     // COM01 - Clear Timer on Compare Match
//    OCR0 = TIMING_CONSTANT;  // OCR0A is max val of timer before reset
    ///////////////////////////////////////////////////////////////////////////

    // Set low bits corresponding to pin we read from
    ADMUX |= _BV(ADLAR) | 0x06;  // connect PA6 (V_MONITOR_PIN) to ADC

    // ensure ADC isn't shut off
    // PRR &= ~_BV(PRADC);
    ADCSRA |= _BV(ADEN);  // enable the ADC - Pg. 133

    // enable global interrupts
    sei();
}

/* Voltage Function */
uint8_t get_voltage() {
    // Start conversation by writing to start bit
    ADCSRA |= _BV(ADSC);

    // Wait for ADSC bit to clear
    while (ADCSRA & _BV(ADSC))
        ;

    // ADHC will range from 0 to 255 corresponding to 0 through VCC
    return ADCH;
}

void main() {
	init();

	PORTD &= ~(_BV(PD3));

	for (;;) {
		if (PINC & _BV(DB_SWITCH)) {
			DDRD &= ~(_BV(MCU_YELLOW));
		} else {
			DDRD |= _BV(MCU_YELLOW);
		}
	}

	for (;;);
}
