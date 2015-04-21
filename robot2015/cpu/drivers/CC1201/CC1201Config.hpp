#pragma once

#include "CC1201Radio.hpp"

class CC1201Config
{
	protected:
		CC1201* deviceLink;

	public:
		/**
 		 *
		 */
		static CC1201Config* resetConfiguration(CC1201Config* instance);

		/**
 		 * 
		 */
		static CC1201* loadConfiguration(CC1201Config* config, CC1201* device);
    
        /**
         *
         */
        static CC1201Config* verifyConfiguration(CC1201Config* config, CC1201* device);


		/**
		 * default constructor
		 */
		CC1201Config();

		/**
		 * default destructor
		 */
		~CC1201Config();

		/**
		 * links a CC1201 device driver to the configuration
		 */
		void setDeviceLink(CC1201* dev)
		{
			deviceLink = dev;
		}

		/**
		 * gets the CC1201 device driver currently linked to the configuration
		 */
		CC1201* getDeviceLink(void)
		{
			return deviceLink;
		}

		/**
		 * loads the configuration into the linked CC1201 device driver
		 */
		void loadLinkedDevice();

		/*
		 * standard register values
		 */
		uint8_t iocfg3; 			// GPIO3 IO Pin Configuration
		uint8_t iocfg2; 			// GPIO2 IO Pin Configuration
		uint8_t iocfg1; 			// GPIO1 IO Pin Configuration
		uint8_t iocfg0; 			// GPIO0 IO Pin Configuration
		uint8_t sync3; 				// Sync Word Configuration [31:24]
		uint8_t sync2; 				// Sync Word Configuration [23:16]
		uint8_t sync1; 				// Sync Word Configuration [15:8]
		uint8_t sync0; 				// Sync Word Configuration [7:0]
		uint8_t syncCfg1; 			// Sync Word Detection Configuration Reg. 1
		uint8_t syncCfg0; 			// Sync Word Detection Configuration Reg. 0
		uint8_t deviationM; 		// Frequency Deviation Configuration
		uint8_t modcfgDevE; 		// Modulation Format and Frequency Deviation Configur..
		uint8_t dcfiltCfg; 			// Digital DC Removal Configuration
		uint8_t preambleCfg1; 		// Preamble Length Configuration Reg. 1
		uint8_t preambleCfg0; 		// Preamble Detection Configuration Reg. 0
		uint8_t iqic; 				// Digital Image Channel Compensation Configuration
		uint8_t chanBw; 			// Channel Filter Configuration
		uint8_t mdmcfg1; 			// General Modem Parameter Configuration Reg. 1
		uint8_t mdmcfg0; 			// General Modem Parameter Configuration Reg. 0
		uint8_t symbolRate2; 		// Symbol Rate Configuration Exponent and Mantissa [1..
		uint8_t symbolRate1; 		// Symbol Rate Configuration Mantissa [15:8]
		uint8_t symbolRate0; 		// Symbol Rate Configuration Mantissa [7:0]
		uint8_t agcRef; 			// AGC Reference Level Configuration
		uint8_t agcCsThr; 			// Carrier Sense Threshold Configuration
		uint8_t agcGainAdjust; 		// RSSI Offset Configuration
		uint8_t agcCfg3; 			// Automatic Gain Control Configuration Reg. 3
		uint8_t agcCfg2; 			// Automatic Gain Control Configuration Reg. 2
		uint8_t agcCfg1; 			// Automatic Gain Control Configuration Reg. 1
		uint8_t agcCfg0; 			// Automatic Gain Control Configuration Reg. 0
		uint8_t fifoCfg; 			// FIFO Configuration
		uint8_t devAddr; 			// Device Address Configuration
		uint8_t settlingCfg; 		// Frequency Synthesizer Calibration and Settling Con..
		uint8_t fsCfg; 				// Frequency Synthesizer Configuration
		uint8_t worCfg1; 			// eWOR Configuration Reg. 1
		uint8_t worCfg0; 			// eWOR Configuration Reg. 0
		uint8_t worEvent0Msb; 		// Event 0 Configuration MSB
		uint8_t worEvent0Lsb; 		// Event 0 Configuration LSB
		uint8_t rxdcmTime; 			// RX Duty Cycle Mode Configuration
		uint8_t pktCfg2; 			// Packet Configuration Reg. 2
		uint8_t pktCfg1; 			// Packet Configuration Reg. 1
		uint8_t pktCfg0; 			// Packet Configuration Reg. 0
		uint8_t rfendCfg1; 			// RFEND Configuration Reg. 1
		uint8_t rfendCfg0; 			// RFEND Configuration Reg. 0
		uint8_t paCfg1; 			// Power Amplifier Configuration Reg. 1
		uint8_t paCfg0; 			// Power Amplifier Configuration Reg. 0
		uint8_t askCfg; 			// ASK Configuration
		uint8_t pktLen; 			// Packet Length Configuration
		uint8_t ifMixCfg; 			// IF Mix Configuration
		uint8_t freqoffCfg; 		// Frequency Offset Correction Configuration
		uint8_t tocCfg; 			// Timing Offset Correction Configuration
		uint8_t marcSpare; 			// MARC Spare
		uint8_t ecgCfg; 			// External Clock Frequency Configuration
		uint8_t mdmcfg2; 			// General Modem Parameter Configuration Reg. 2
		uint8_t extCtrl; 			// External Control Configuration
		uint8_t rccalFine; 			// RC Oscillator Calibration Fine
		uint8_t rccalCoarse; 		// RC Oscillator Calibration Coarse
		uint8_t rccalOffset; 		// RC Oscillator Calibration Clock Offset
		uint8_t freqoff1; 			// Frequency Offset MSB
		uint8_t freqoff0; 			// Frequency Offset LSB
		uint8_t freq2; 				// Frequency Configuration [23:16]
		uint8_t freq1; 				// Frequency Configuration [15:8]
		uint8_t freq0; 				// Frequency Configuration [7:0]
		uint8_t ifAdc2; 			// Analog to Digital Converter Configuration Reg. 2
		uint8_t ifAdc1; 			// Analog to Digital Converter Configuration Reg. 1
		uint8_t ifAdc0; 			// Analog to Digital Converter Configuration Reg. 0
		uint8_t fsDig1; 			// Frequency Synthesizer Digital Reg. 1
		uint8_t fsDig0; 			// Frequency Synthesizer Digital Reg. 0
		uint8_t fsCal3; 			// Frequency Synthesizer Calibration Reg. 3
		uint8_t fsCal2; 			// Frequency Synthesizer Calibration Reg. 2
		uint8_t fsCal1; 			// Frequency Synthesizer Calibration Reg. 1
		uint8_t fsCal0; 			// Frequency Synthesizer Calibration Reg. 0
		uint8_t fsChp; 				// Frequency Synthesizer Charge Pump Configuration
		uint8_t fsDivtwo; 			// Frequency Synthesizer Divide by 2
		uint8_t fsDsm1; 			// FS Digital Synthesizer Module Configuration Reg. 1
		uint8_t fsDsm0; 			// FS Digital Synthesizer Module Configuration Reg. 0
		uint8_t fsDvc1; 			// Frequency Synthesizer Divider Chain Configuration ..
		uint8_t fsDvc0; 			// Frequency Synthesizer Divider Chain Configuration ..
		uint8_t fsLbi; 				// Frequency Synthesizer Local Bias Configuration
		uint8_t fsPfd; 				// Frequency Synthesizer Phase Frequency Detector Con..
		uint8_t fsPre; 				// Frequency Synthesizer Prescaler Configuration
		uint8_t fsRegDivCml; 		// Frequency Synthesizer Divider Regulator Configurat..
		uint8_t fsSpare; 			// Frequency Synthesizer Spare
		uint8_t fsVco4; 			// FS Voltage Controlled Oscillator Configuration Reg..
		uint8_t fsVco3; 			// FS Voltage Controlled Oscillator Configuration Reg..
		uint8_t fsVco2; 			// FS Voltage Controlled Oscillator Configuration Reg..
		uint8_t fsVco1; 			// FS Voltage Controlled Oscillator Configuration Reg..
		uint8_t fsVco0; 			// FS Voltage Controlled Oscillator Configuration Reg..
		uint8_t gbias6; 			// Global Bias Configuration Reg. 6
		uint8_t gbias5; 			// Global Bias Configuration Reg. 5
		uint8_t gbias4; 			// Global Bias Configuration Reg. 4
		uint8_t gbias3; 			// Global Bias Configuration Reg. 3
		uint8_t gbias2; 			// Global Bias Configuration Reg. 2
		uint8_t gbias1; 			// Global Bias Configuration Reg. 1
		uint8_t gbias0; 			// Global Bias Configuration Reg. 0
		uint8_t ifamp; 				// Intermediate Frequency Amplifier Configuration
		uint8_t lna; 				// Low Noise Amplifier Configuration
		uint8_t rxmix; 				// RX Mixer Configuration
		uint8_t xosc5; 				// Crystal Oscillator Configuration Reg. 5
		uint8_t xosc4; 				// Crystal Oscillator Configuration Reg. 4
		uint8_t xosc3; 				// Crystal Oscillator Configuration Reg. 3
		uint8_t xosc2; 				// Crystal Oscillator Configuration Reg. 2
		uint8_t xosc1; 				// Crystal Oscillator Configuration Reg. 1
		uint8_t xosc0; 				// Crystal Oscillator Configuration Reg. 0
		uint8_t analogSpare; 		// Analog Spare
		uint8_t paCfg3; 			// Power Amplifier Configuration Reg. 3
		uint8_t worTime1; 			// eWOR Timer Counter Value MSB
		uint8_t worTime0; 			// eWOR Timer Counter Value LSB
		uint8_t worCapture1; 		// eWOR Timer Capture Value MSB
		uint8_t worCapture0; 		// eWOR Timer Capture Value LSB
		uint8_t bist; 				// MARC Built-In Self-Test
		uint8_t dcfiltoffsetI1; 	// DC Filter Offset I MSB
		uint8_t dcfiltoffsetI0; 	// DC Filter Offset I LSB
		uint8_t dcfiltoffsetQ1; 	// DC Filter Offset Q MSB
		uint8_t dcfiltoffsetQ0; 	// DC Filter Offset Q LSB
		uint8_t iqieI1; 			// IQ Imbalance Value I MSB
		uint8_t iqieI0; 			// IQ Imbalance Value I LSB
		uint8_t iqieQ1; 			// IQ Imbalance Value Q MSB
		uint8_t iqieQ0; 			// IQ Imbalance Value Q LSB
		uint8_t rssi1; 				// Received Signal Strength Indicator Reg. 1
		uint8_t rssi0; 				// Received Signal Strength Indicator Reg.0
		uint8_t marcstate; 			// MARC State
		uint8_t lqiVal; 			// Link Quality Indicator Value
		uint8_t pqtSyncErr; 		// Preamble and Sync Word Error
		uint8_t demStatus; 			// Demodulator Status
		uint8_t freqoffEst1; 		// Frequency Offset Estimate MSB
		uint8_t freqoffEst0; 		// Frequency Offset Estimate LSB
		uint8_t agcGain3; 			// Automatic Gain Control Reg. 3
		uint8_t agcGain2; 			// Automatic Gain Control Reg. 2
		uint8_t agcGain1; 			// Automatic Gain Control Reg. 1
		uint8_t agcGain0; 			// Automatic Gain Control Reg. 0
		uint8_t cfmRxDataOut; 		// Custom Frequency Modulation RX Data
		uint8_t cfmTxDataIn; 		// Custom Frequency Modulation TX Data
		uint8_t askSoftRxData; 		// ASK Soft Decision Output
		uint8_t rndgen; 			// Random Number Generator Value
		uint8_t magn2; 				// Signal Magnitude after CORDIC [16]
		uint8_t magn1; 				// Signal Magnitude after CORDIC [15:8]
		uint8_t magn0; 				// Signal Magnitude after CORDIC [7:0]
		uint8_t ang1; 				// Signal Angular after CORDIC [9:8]
		uint8_t ang0; 				// Signal Angular after CORDIC [7:0]
		uint8_t chfiltI2; 			// Channel Filter Data Real Part [16]
		uint8_t chfiltI1; 			// Channel Filter Data Real Part [15:8]
		uint8_t chfiltI0; 			// Channel Filter Data Real Part [7:0]
		uint8_t chfiltQ2; 			// Channel Filter Data Imaginary Part [16]
		uint8_t chfiltQ1; 			// Channel Filter Data Imaginary Part [15:8]
		uint8_t chfiltQ0; 			// Channel Filter Data Imaginary Part [7:0]
		uint8_t gpioStatus; 		// General Purpose Input/Output Status
		uint8_t fscalCtrl; 			// Frequency Synthesizer Calibration Control
		uint8_t phaseAdjust; 		// Frequency Synthesizer Phase Adjust
		uint8_t partnumber; 		// Part Number
		uint8_t partversion; 		// Part Revision
		uint8_t serialStatus; 		// Serial Status
		uint8_t modemStatus1; 		// Modem Status Reg. 1
		uint8_t modemStatus0;		// Modem Status Reg. 0
		uint8_t marcStatus1; 		// MARC Status Reg. 1
		uint8_t marcStatus0; 		// MARC Status Reg. 0
		uint8_t paIfampTest; 		// Power Amplifier Intermediate Frequency Amplifier T..
		uint8_t fsrfTest; 			// Frequency Synthesizer Test
		uint8_t preTest; 			// Frequency Synthesizer Prescaler Test
		uint8_t preOvr; 			// Frequency Synthesizer Prescaler Override
		uint8_t adcTest; 			// Analog to Digital Converter Test
		uint8_t dvcTest; 			// Digital Divider Chain Test
		uint8_t atest; 				// Analog Test
		uint8_t atestLvds; 			// Analog Test LVDS
		uint8_t atestMode; 			// Analog Test Mode
		uint8_t xoscTest1; 			// Crystal Oscillator Test Reg. 1
		uint8_t xoscTest0; 			// Crystal Oscillator Test Reg. 0
		uint8_t aes;				// AES
		uint8_t mdmTest; 			// MODEM Test
		uint8_t rxfirst; 			// RX FIFO Pointer First Entry
		uint8_t txfirst; 			// TX FIFO Pointer First Entry
		uint8_t rxlast; 			// RX FIFO Pointer Last Entry
		uint8_t txlast; 			// TX FIFO Pointer Last Entry
		uint8_t numTxbytes; 		// TX FIFO Status
		uint8_t numRxbytes; 		// RX FIFO Status
		uint8_t fifoNumTxbytes; 	// TX FIFO Status
		uint8_t fifoNumRxbytes; 	// RX FIFO Status
		uint8_t rxfifoPreBuf; 		// RX FIFO Status
		uint8_t aesKey15; 			// Advanced Encryption Standard Key [127:120]
		uint8_t aesKey14; 			// Advanced Encryption Standard Key [119:112]
		uint8_t aesKey13; 			// Advanced Encryption Standard Key [111:104]
		uint8_t aesKey12; 			// Advanced Encryption Standard Key [103:96]
		uint8_t aesKey11; 			// Advanced Encryption Standard Key [95:88]
		uint8_t aesKey10; 			// Advanced Encryption Standard Key [87:80]
		uint8_t aesKey9; 			// Advanced Encryption Standard Key [79:72]
		uint8_t aesKey8; 			// Advanced Encryption Standard Key [71:64]
		uint8_t aesKey7; 			// Advanced Encryption Standard Key [63:56]
		uint8_t aesKey6; 			// Advanced Encryption Standard Key [55:48]
		uint8_t aesKey5; 			// Advanced Encryption Standard Key [47:40]
		uint8_t aesKey4; 			// Advanced Encryption Standard Key [39:32]
		uint8_t aesKey3; 			// Advanced Encryption Standard Key [31:24]
		uint8_t aesKey2; 			// Advanced Encryption Standard Key [23:16]
		uint8_t aesKey1; 			// Advanced Encryption Standard Key [15:8]
		uint8_t aesKey0; 			// Advanced Encryption Standard Key [7:0]
		uint8_t aesBuffer15; 		// Advanced Encryption Standard Buffer [127:120]
		uint8_t aesBuffer14; 		// Advanced Encryption Standard Buffer [119:112]
		uint8_t aesBuffer13; 		// Advanced Encryption Standard Buffer [111:104]
		uint8_t aesBuffer12; 		// Advanced Encryption Standard Buffer [103:93]
		uint8_t aesBuffer11; 		// Advanced Encryption Standard Buffer [95:88]
		uint8_t aesBuffer10; 		// Advanced Encryption Standard Buffer [87:80]
		uint8_t aesBuffer9; 		// Advanced Encryption Standard Buffer [79:72]
		uint8_t aesBuffer8; 		// Advanced Encryption Standard Buffer [71:64]
		uint8_t aesBuffer7; 		// Advanced Encryption Standard Buffer [63:56]
		uint8_t aesBuffer6; 		// Advanced Encryption Standard Buffer [55:48]
		uint8_t aesBuffer5; 		// Advanced Encryption Standard Buffer [47:40]
		uint8_t aesBuffer4; 		// Advanced Encryption Standard Buffer [39:32]
		uint8_t aesBuffer3; 		// Advanced Encryption Standard Buffer [31:24]
		uint8_t aesBuffer2; 		// Advanced Encryption Standard Buffer [23:16]
		uint8_t aesBuffer1; 		// Advanced Encryption Standard Buffer [15:8]
		uint8_t aesBuffer0; 		// Advanced Encryption Standard Buffer [7:0]
};
