#include <queue>
#include <string>

#include "CC1201Radio.hpp"

using namespace std;

CC1201Config::CC1201Config() {}

CC1201Config::~CC1201Config() {}

queue<string> CC1201Config::configurationFaults;

CC1201Config* CC1201Config::resetConfiguration(CC1201Config* config)
{
	//standard registers
	config->iocfg3 				= SMARTRF_SETTING_IOCFG3;	
	config->iocfg2 				= SMARTRF_SETTING_IOCFG2;
	config->iocfg1 				= SMARTRF_SETTING_IOCFG1;
	config->iocfg0 				= SMARTRF_SETTING_IOCFG0;
	config->sync3 				= SMARTRF_SETTING_SYNC3;
	config->sync2 				= SMARTRF_SETTING_SYNC2;
	config->sync1 				= SMARTRF_SETTING_SYNC1;
	config->sync0 				= SMARTRF_SETTING_SYNC0;
	config->syncCfg1 			= SMARTRF_SETTING_SYNC_CFG1;
	config->syncCfg0 			= SMARTRF_SETTING_SYNC_CFG0;
	config->deviationM 			= SMARTRF_SETTING_DEVIATION_M;
	config->modcfgDevE 			= SMARTRF_SETTING_MODCFG_DEV_E;
	config->dcfiltCfg 			= SMARTRF_SETTING_DCFILT_CFG;
	config->preambleCfg1 		= SMARTRF_SETTING_PREAMBLE_CFG1;
	config->preambleCfg0 		= SMARTRF_SETTING_PREAMBLE_CFG0;
	config->iqic 				= SMARTRF_SETTING_IQIC;
	config->chanBw 				= SMARTRF_SETTING_CHAN_BW;
	config->mdmcfg1 			= SMARTRF_SETTING_MDMCFG1;
	config->mdmcfg0 			= SMARTRF_SETTING_MDMCFG0;
	config->symbolRate2 		= SMARTRF_SETTING_SYMBOL_RATE2;
	config->symbolRate1 		= SMARTRF_SETTING_SYMBOL_RATE1;
	config->symbolRate0 		= SMARTRF_SETTING_SYMBOL_RATE0;
	config->agcRef 				= SMARTRF_SETTING_AGC_REF;
	config->agcCsThr 			= SMARTRF_SETTING_AGC_CS_THR;
	config->agcGainAdjust 		= SMARTRF_SETTING_AGC_GAIN_ADJUST;
	config->agcCfg3 			= SMARTRF_SETTING_AGC_CFG3;
	config->agcCfg2 			= SMARTRF_SETTING_AGC_CFG2;
	config->agcCfg1 			= SMARTRF_SETTING_AGC_CFG1;
	config->agcCfg0 			= SMARTRF_SETTING_AGC_CFG0;
	config->fifoCfg 			= SMARTRF_SETTING_FIFO_CFG;
	config->devAddr 			= SMARTRF_SETTING_DEV_ADDR;
	config->settlingCfg 		= SMARTRF_SETTING_SETTLING_CFG;
	config->fsCfg 				= SMARTRF_SETTING_FS_CFG;
	config->worCfg1 			= SMARTRF_SETTING_WOR_CFG1;
	config->worCfg0 			= SMARTRF_SETTING_WOR_CFG0;
	config->worEvent0Msb 		= SMARTRF_SETTING_WOR_EVENT0_MSB;
	config->worEvent0Lsb 		= SMARTRF_SETTING_WOR_EVENT0_LSB;
	config->rxdcmTime 			= SMARTRF_SETTING_RXDCM_TIME;
	config->pktCfg2 			= SMARTRF_SETTING_PKT_CFG2;
	config->pktCfg1 			= SMARTRF_SETTING_PKT_CFG1;
	config->pktCfg0 			= SMARTRF_SETTING_PKT_CFG0;
	config->rfendCfg1 			= SMARTRF_SETTING_RFEND_CFG1;
	config->rfendCfg0 			= SMARTRF_SETTING_RFEND_CFG0;
	config->paCfg1 				= SMARTRF_SETTING_PA_CFG1;
	config->paCfg0 				= SMARTRF_SETTING_PA_CFG0;
	config->askCfg 				= SMARTRF_SETTING_ASK_CFG;
	config->pktLen 				= SMARTRF_SETTING_PKT_LEN;
	//extended registers
	config->ifMixCfg 			= SMARTRF_SETTING_IF_MIX_CFG;
	config->freqoffCfg 			= SMARTRF_SETTING_FREQOFF_CFG;
	config->tocCfg 				= SMARTRF_SETTING_TOC_CFG;
	config->marcSpare 			= SMARTRF_SETTING_MARC_SPARE;
	config->ecgCfg 				= SMARTRF_SETTING_ECG_CFG;
	config->mdmcfg2 			= SMARTRF_SETTING_MDMCFG2;
	config->extCtrl 			= SMARTRF_SETTING_EXT_CTRL;
	config->rccalFine 			= SMARTRF_SETTING_RCCAL_FINE;
	config->rccalCoarse 		= SMARTRF_SETTING_RCCAL_COARSE;
	config->rccalOffset 		= SMARTRF_SETTING_RCCAL_OFFSET;
	config->freqoff1 			= SMARTRF_SETTING_FREQOFF1;
	config->freqoff0 			= SMARTRF_SETTING_FREQOFF0;
	config->freq2 				= SMARTRF_SETTING_FREQ2;
	config->freq1 				= SMARTRF_SETTING_FREQ1;
	config->freq0 				= SMARTRF_SETTING_FREQ0;
	config->ifAdc2 				= SMARTRF_SETTING_IF_ADC2;
	config->ifAdc1 				= SMARTRF_SETTING_IF_ADC1;
	config->ifAdc0 				= SMARTRF_SETTING_IF_ADC0;
	config->fsDig1 				= SMARTRF_SETTING_FS_DIG1;
	config->fsDig0 				= SMARTRF_SETTING_FS_DIG0;
	config->fsCal3 				= SMARTRF_SETTING_FS_CAL3;
	config->fsCal2 				= SMARTRF_SETTING_FS_CAL2;
	config->fsCal1 				= SMARTRF_SETTING_FS_CAL1;
	config->fsCal0 				= SMARTRF_SETTING_FS_CAL0;
	config->fsChp 				= SMARTRF_SETTING_FS_CHP;
	config->fsDivtwo 			= SMARTRF_SETTING_FS_DIVTWO;
	config->fsDsm1 				= SMARTRF_SETTING_FS_DSM1;
	config->fsDsm0 				= SMARTRF_SETTING_FS_DSM0;
	config->fsDvc1 				= SMARTRF_SETTING_FS_DVC1;
	config->fsDvc0 				= SMARTRF_SETTING_FS_DVC0;
	config->fsLbi 				= SMARTRF_SETTING_FS_LBI;
	config->fsPfd 				= SMARTRF_SETTING_FS_PFD;
	config->fsPre 				= SMARTRF_SETTING_FS_PRE;
	config->fsRegDivCml 		= SMARTRF_SETTING_FS_REG_DIV_CML;
	config->fsSpare 			= SMARTRF_SETTING_FS_SPARE;
	config->fsVco4 				= SMARTRF_SETTING_FS_VCO4;
	config->fsVco3 				= SMARTRF_SETTING_FS_VCO3;
	config->fsVco2 				= SMARTRF_SETTING_FS_VCO2;
	config->fsVco1 				= SMARTRF_SETTING_FS_VCO1;
	config->fsVco0 				= SMARTRF_SETTING_FS_VCO0;
	config->gbias6 				= SMARTRF_SETTING_GBIAS6;
	config->gbias5 				= SMARTRF_SETTING_GBIAS5;
	config->gbias4 				= SMARTRF_SETTING_GBIAS4;
	config->gbias3 				= SMARTRF_SETTING_GBIAS3;
	config->gbias2 				= SMARTRF_SETTING_GBIAS2;
	config->gbias1 				= SMARTRF_SETTING_GBIAS1;
	config->gbias0 				= SMARTRF_SETTING_GBIAS0;
	config->ifamp 				= SMARTRF_SETTING_IFAMP;
	config->lna 				= SMARTRF_SETTING_LNA;
	config->rxmix 				= SMARTRF_SETTING_RXMIX;
	config->xosc5 				= SMARTRF_SETTING_XOSC5;
	config->xosc4 				= SMARTRF_SETTING_XOSC4;
	config->xosc3 				= SMARTRF_SETTING_XOSC3;
	config->xosc2 				= SMARTRF_SETTING_XOSC2;
	config->xosc1				= SMARTRF_SETTING_XOSC1;
	config->xosc0 				= SMARTRF_SETTING_XOSC0;
	config->analogSpare 		= SMARTRF_SETTING_ANALOG_SPARE;
	config->paCfg3 				= SMARTRF_SETTING_PA_CFG3;
	config->worTime1 			= SMARTRF_SETTING_WOR_TIME1;
	config->worTime0			= SMARTRF_SETTING_WOR_TIME0;
	config->worCapture1 		= SMARTRF_SETTING_WOR_CAPTURE1;
	config->worCapture0 		= SMARTRF_SETTING_WOR_CAPTURE0;
	config->bist 				= SMARTRF_SETTING_BIST;
	config->dcfiltoffsetI1 		= SMARTRF_SETTING_DCFILTOFFSET_I1;
	config->dcfiltoffsetI0 		= SMARTRF_SETTING_DCFILTOFFSET_I0;
	config->dcfiltoffsetQ1 		= SMARTRF_SETTING_DCFILTOFFSET_Q1;
	config->dcfiltoffsetQ0 		= SMARTRF_SETTING_DCFILTOFFSET_Q0;
	config->iqieI1 				= SMARTRF_SETTING_IQIE_I1;
	config->iqieI0 				= SMARTRF_SETTING_IQIE_I0;
	config->iqieQ1 				= SMARTRF_SETTING_IQIE_Q1;
	config->iqieQ0 				= SMARTRF_SETTING_IQIE_Q0;
	config->rssi1 				= SMARTRF_SETTING_RSSI1;
	config->rssi0 				= SMARTRF_SETTING_RSSI0;
	config->marcstate 			= SMARTRF_SETTING_MARCSTATE;
	config->lqiVal 				= SMARTRF_SETTING_LQI_VAL;
	config->pqtSyncErr 			= SMARTRF_SETTING_PQT_SYNC_ERR;
	config->demStatus 			= SMARTRF_SETTING_DEM_STATUS;
	config->freqoffEst1 		= SMARTRF_SETTING_FREQOFF_EST1;
	config->freqoffEst0 		= SMARTRF_SETTING_FREQOFF_EST0;
	config->agcGain3 		 	= SMARTRF_SETTING_AGC_GAIN3;
	config->agcGain2 			= SMARTRF_SETTING_AGC_GAIN2;
	config->agcGain1 			= SMARTRF_SETTING_AGC_GAIN1;
	config->agcGain0 			= SMARTRF_SETTING_AGC_GAIN0;
	config->cfmRxDataOut		= SMARTRF_SETTING_CFM_RX_DATA_OUT;
	config->cfmTxDataIn 		= SMARTRF_SETTING_CFM_TX_DATA_IN;
	config->askSoftRxData 		= SMARTRF_SETTING_ASK_SOFT_RX_DATA;
	config->rndgen				= SMARTRF_SETTING_RNDGEN;
	config->magn2				= SMARTRF_SETTING_MAGN2;
	config->magn1				= SMARTRF_SETTING_MAGN1;
	config->magn0				= SMARTRF_SETTING_MAGN0;
	config->ang1 				= SMARTRF_SETTING_ANG1;
	config->ang0 				= SMARTRF_SETTING_ANG0;
	config->chfiltI2 			= SMARTRF_SETTING_CHFILT_I2;
	config->chfiltI1 			= SMARTRF_SETTING_CHFILT_I1;
	config->chfiltI0 			= SMARTRF_SETTING_CHFILT_I0;
	config->chfiltQ2 			= SMARTRF_SETTING_CHFILT_Q2;
	config->chfiltQ1 			= SMARTRF_SETTING_CHFILT_Q1;
	config->chfiltQ0 			= SMARTRF_SETTING_CHFILT_Q0;
	config->gpioStatus 			= SMARTRF_SETTING_GPIO_STATUS;
	config->fscalCtrl 			= SMARTRF_SETTING_FSCAL_CTRL;
	config->phaseAdjust 		= SMARTRF_SETTING_PHASE_ADJUST;
	config->partnumber 			= SMARTRF_SETTING_PARTNUMBER;
	config->partversion 		= SMARTRF_SETTING_PARTVERSION;
	config->serialStatus 		= SMARTRF_SETTING_SERIAL_STATUS;
	config->modemStatus1 		= SMARTRF_SETTING_MODEM_STATUS1;
	config->modemStatus0		= SMARTRF_SETTING_MODEM_STATUS0;
	config->marcStatus1 		= SMARTRF_SETTING_MARC_STATUS1;
	config->marcStatus0 		= SMARTRF_SETTING_MARC_STATUS0;
	config->paIfampTest 		= SMARTRF_SETTING_PA_IFAMP_TEST;
	config->fsrfTest 			= SMARTRF_SETTING_FSRF_TEST;
	config->preTest 			= SMARTRF_SETTING_PRE_TEST;
	config->preOvr				= SMARTRF_SETTING_PRE_OVR;
	config->adcTest 			= SMARTRF_SETTING_ADC_TEST;
	config->dvcTest 			= SMARTRF_SETTING_DVC_TEST;
	config->atest 				= SMARTRF_SETTING_ATEST;
	config->atestLvds			= SMARTRF_SETTING_ATEST_LVDS;
	config->atestMode 			= SMARTRF_SETTING_ATEST_MODE;
	config->xoscTest1 			= SMARTRF_SETTING_XOSC_TEST1;
	config->xoscTest0 			= SMARTRF_SETTING_XOSC_TEST0;
	config->aes					= SMARTRF_SETTING_AES;
	config->mdmTest 			= SMARTRF_SETTING_MDM_TEST;
	config->rxfirst 			= SMARTRF_SETTING_RXFIRST;
	config->txfirst 			= SMARTRF_SETTING_TXFIRST;
	config->rxlast 				= SMARTRF_SETTING_RXLAST;
	config->txlast 				= SMARTRF_SETTING_TXLAST;
	config->numTxbytes 			= SMARTRF_SETTING_NUM_TXBYTES;
	config->numRxbytes 			= SMARTRF_SETTING_NUM_RXBYTES;
	config->fifoNumTxbytes 		= SMARTRF_SETTING_FIFO_NUM_TXBYTES;
	config->fifoNumRxbytes		= SMARTRF_SETTING_FIFO_NUM_RXBYTES;
	config->rxfifoPreBuf 		= SMARTRF_SETTING_RXFIFO_PRE_BUF;
	config->aesKey15 			= SMARTRF_SETTING_AES_KEY15;
	config->aesKey14 			= SMARTRF_SETTING_AES_KEY14;
	config->aesKey13 			= SMARTRF_SETTING_AES_KEY13;
	config->aesKey12 			= SMARTRF_SETTING_AES_KEY12;
	config->aesKey11 			= SMARTRF_SETTING_AES_KEY11;
	config->aesKey10 			= SMARTRF_SETTING_AES_KEY10;
	config->aesKey9 			= SMARTRF_SETTING_AES_KEY9;
	config->aesKey8 			= SMARTRF_SETTING_AES_KEY8;
	config->aesKey7 			= SMARTRF_SETTING_AES_KEY7;
	config->aesKey6 			= SMARTRF_SETTING_AES_KEY6;
	config->aesKey5 			= SMARTRF_SETTING_AES_KEY5;
	config->aesKey4 			= SMARTRF_SETTING_AES_KEY4;
	config->aesKey3 			= SMARTRF_SETTING_AES_KEY3;
	config->aesKey2 			= SMARTRF_SETTING_AES_KEY2;
	config->aesKey1 			= SMARTRF_SETTING_AES_KEY1;
	config->aesKey0 			= SMARTRF_SETTING_AES_KEY0;
	config->aesBuffer15 		= SMARTRF_SETTING_AES_BUFFER15;
	config->aesBuffer14 		= SMARTRF_SETTING_AES_BUFFER14;
	config->aesBuffer13 		= SMARTRF_SETTING_AES_BUFFER13;
	config->aesBuffer12 		= SMARTRF_SETTING_AES_BUFFER12;
	config->aesBuffer11 		= SMARTRF_SETTING_AES_BUFFER11;
	config->aesBuffer10 		= SMARTRF_SETTING_AES_BUFFER10;
	config->aesBuffer9 			= SMARTRF_SETTING_AES_BUFFER9;
	config->aesBuffer8 			= SMARTRF_SETTING_AES_BUFFER8;
	config->aesBuffer7 			= SMARTRF_SETTING_AES_BUFFER7;
	config->aesBuffer6 			= SMARTRF_SETTING_AES_BUFFER6;
	config->aesBuffer5 			= SMARTRF_SETTING_AES_BUFFER5;
	config->aesBuffer4 			= SMARTRF_SETTING_AES_BUFFER4;
	config->aesBuffer3 			= SMARTRF_SETTING_AES_BUFFER3;
	config->aesBuffer2 			= SMARTRF_SETTING_AES_BUFFER2;
	config->aesBuffer1 			= SMARTRF_SETTING_AES_BUFFER1;
	config->aesBuffer0 			= SMARTRF_SETTING_AES_BUFFER0;

	return config;
}

CC1201* CC1201Config::loadConfiguration(CC1201Config* config, CC1201* device)
{
	//write standard registers
	device->writeReg(CC1201_IOCFG3, config->iocfg3); 
	device->writeReg(CC1201_IOCFG2, config->iocfg2); 
	device->writeReg(CC1201_IOCFG1, config->iocfg1); 
	device->writeReg(CC1201_IOCFG0, config->iocfg0); 
	device->writeReg(CC1201_SYNC3, config->sync3); 
	device->writeReg(CC1201_SYNC2, config->sync2); 
	device->writeReg(CC1201_SYNC1, config->sync1); 
	device->writeReg(CC1201_SYNC0, config->sync0); 
	device->writeReg(CC1201_SYNC_CFG1, config->syncCfg1); 
	device->writeReg(CC1201_SYNC_CFG0, config->syncCfg0); 
	device->writeReg(CC1201_DEVIATION_M, config->deviationM); 
	device->writeReg(CC1201_MODCFG_DEV_E, config->modcfgDevE); 
	device->writeReg(CC1201_DCFILT_CFG, config->dcfiltCfg); 
	device->writeReg(CC1201_PREAMBLE_CFG1, config->preambleCfg1); 
	device->writeReg(CC1201_PREAMBLE_CFG0, config->preambleCfg0); 
	device->writeReg(CC1201_IQIC, config->iqic); 
	device->writeReg(CC1201_CHAN_BW, config->chanBw); 
	device->writeReg(CC1201_MDMCFG1, config->mdmcfg1); 
	device->writeReg(CC1201_MDMCFG0, config->mdmcfg0); 
	device->writeReg(CC1201_SYMBOL_RATE2, config->symbolRate2); 
	device->writeReg(CC1201_SYMBOL_RATE1, config->symbolRate1); 
	device->writeReg(CC1201_SYMBOL_RATE0, config->symbolRate0); 
	device->writeReg(CC1201_AGC_REF, config->agcRef); 
	device->writeReg(CC1201_AGC_CS_THR, config->agcCsThr); 
	device->writeReg(CC1201_AGC_GAIN_ADJUST, config->agcGainAdjust); 
	device->writeReg(CC1201_AGC_CFG3, config->agcCfg3); 
	device->writeReg(CC1201_AGC_CFG2, config->agcCfg2); 
	device->writeReg(CC1201_AGC_CFG1, config->agcCfg1); 
	device->writeReg(CC1201_AGC_CFG0, config->agcCfg0); 
	device->writeReg(CC1201_FIFO_CFG, config->fifoCfg); 
	device->writeReg(CC1201_DEV_ADDR, config->devAddr); 
	device->writeReg(CC1201_SETTLING_CFG, config->settlingCfg); 
	device->writeReg(CC1201_FS_CFG, config->fsCfg); 
	device->writeReg(CC1201_WOR_CFG1, config->worCfg1); 
	device->writeReg(CC1201_WOR_CFG0, config->worCfg0); 
	device->writeReg(CC1201_WOR_EVENT0_MSB, config->worEvent0Msb); 
	device->writeReg(CC1201_WOR_EVENT0_LSB, config->worEvent0Lsb); 
	device->writeReg(CC1201_RXDCM_TIME, config->rxdcmTime); 
	device->writeReg(CC1201_PKT_CFG2, config->pktCfg2); 
	device->writeReg(CC1201_PKT_CFG1, config->pktCfg1); 
	device->writeReg(CC1201_PKT_CFG0, config->pktCfg0); 
	device->writeReg(CC1201_RFEND_CFG1, config->rfendCfg1); 
	device->writeReg(CC1201_RFEND_CFG0, config->rfendCfg0); 
	device->writeReg(CC1201_PA_CFG1, config->paCfg1); 
	device->writeReg(CC1201_PA_CFG0, config->paCfg0); 
	device->writeReg(CC1201_ASK_CFG, config->askCfg); 
	device->writeReg(CC1201_PKT_LEN, config->pktLen); 
	//write extended registers
	device->writeRegExt(CC1201EXT_IF_MIX_CFG, config->ifMixCfg);
	device->writeRegExt(CC1201EXT_FREQOFF_CFG, config->freqoffCfg);
	device->writeRegExt(CC1201EXT_TOC_CFG, config->tocCfg);
	device->writeRegExt(CC1201EXT_MARC_SPARE, config->marcSpare);
	device->writeRegExt(CC1201EXT_ECG_CFG, config->ecgCfg);
	device->writeRegExt(CC1201EXT_MDMCFG2, config->mdmcfg2);
	device->writeRegExt(CC1201EXT_EXT_CTRL, config->extCtrl);
	device->writeRegExt(CC1201EXT_RCCAL_FINE, config->rccalFine);
	device->writeRegExt(CC1201EXT_RCCAL_COARSE, config->rccalCoarse);
	device->writeRegExt(CC1201EXT_RCCAL_OFFSET, config->rccalOffset);
	device->writeRegExt(CC1201EXT_FREQOFF1, config->freqoff1);
	device->writeRegExt(CC1201EXT_FREQOFF0, config->freqoff0);
	device->writeRegExt(CC1201EXT_FREQ2, config->freq2);
	device->writeRegExt(CC1201EXT_FREQ1, config->freq1);
	device->writeRegExt(CC1201EXT_FREQ0, config->freq0);
	device->writeRegExt(CC1201EXT_IF_ADC2, config->ifAdc2);
	device->writeRegExt(CC1201EXT_IF_ADC1, config->ifAdc1);
	device->writeRegExt(CC1201EXT_IF_ADC0, config->ifAdc0);
	device->writeRegExt(CC1201EXT_FS_DIG1, config->fsDig1);
	device->writeRegExt(CC1201EXT_FS_DIG0, config->fsDig0);
	device->writeRegExt(CC1201EXT_FS_CAL3, config->fsCal3);
	device->writeRegExt(CC1201EXT_FS_CAL2, config->fsCal2);
	device->writeRegExt(CC1201EXT_FS_CAL1, config->fsCal1);
	device->writeRegExt(CC1201EXT_FS_CAL0, config->fsCal0);
	device->writeRegExt(CC1201EXT_FS_CHP, config->fsChp);
	device->writeRegExt(CC1201EXT_FS_DIVTWO, config->fsDivtwo);
	device->writeRegExt(CC1201EXT_FS_DSM1, config->fsDsm1);
	device->writeRegExt(CC1201EXT_FS_DMS0, config->fsDsm0);
	device->writeRegExt(CC1201EXT_FS_DVC1, config->fsDvc1);
	device->writeRegExt(CC1201EXT_FS_DVC0, config->fsDvc0);
	device->writeRegExt(CC1201EXT_FS_LBI, config->fsLbi);
	device->writeRegExt(CC1201EXT_FS_PFD, config->fsPfd);
	device->writeRegExt(CC1201EXT_FS_PRE, config->fsPre);
	device->writeRegExt(CC1201EXT_FS_REG_DIV_CML, config->fsRegDivCml);
	device->writeRegExt(CC1201EXT_FS_SPARE, config->fsSpare);
	device->writeRegExt(CC1201EXT_FS_VCO4, config->fsVco4);
	device->writeRegExt(CC1201EXT_FS_VCO3, config->fsVco3);
	device->writeRegExt(CC1201EXT_FS_VCO2, config->fsVco2);
	device->writeRegExt(CC1201EXT_FS_VCO1, config->fsVco1);
	device->writeRegExt(CC1201EXT_FS_VCO0, config->fsVco0);
	device->writeRegExt(CC1201EXT_GBIAS6, config->gbias6);
	device->writeRegExt(CC1201EXT_GBIAS5, config->gbias5);
	device->writeRegExt(CC1201EXT_GBIAS4, config->gbias4);
	device->writeRegExt(CC1201EXT_GBIAS3, config->gbias3);
	device->writeRegExt(CC1201EXT_GBIAS2, config->gbias2);
	device->writeRegExt(CC1201EXT_GBIAS1, config->gbias1);
	device->writeRegExt(CC1201EXT_GBIAS0, config->gbias0);
	device->writeRegExt(CC1201EXT_IFAMP, config->ifamp);
	device->writeRegExt(CC1201EXT_LNA, config->lna);
	device->writeRegExt(CC1201EXT_RXMIX, config->rxmix);
	device->writeRegExt(CC1201EXT_XOSC5, config->xosc5);
	device->writeRegExt(CC1201EXT_XOSC4, config->xosc4);
	device->writeRegExt(CC1201EXT_XOSC3, config->xosc3);
	device->writeRegExt(CC1201EXT_XOSC2, config->xosc2);
	device->writeRegExt(CC1201EXT_XOSC1, config->xosc1);
	device->writeRegExt(CC1201EXT_XOSC0, config->xosc0);
	device->writeRegExt(CC1201EXT_ANALOG_SPARE, config->analogSpare);
	device->writeRegExt(CC1201EXT_PA_CFG3, config->paCfg3);
	device->writeRegExt(CC1201EXT_WOR_TIME1, config->worTime1);
	device->writeRegExt(CC1201EXT_WOR_TIME0, config->worTime0);
	device->writeRegExt(CC1201EXT_WOR_CAPTURE1, config->worCapture1);
	device->writeRegExt(CC1201EXT_WOR_CAPTURE0, config->worCapture0);
	device->writeRegExt(CC1201EXT_BIST, config->bist);
	device->writeRegExt(CC1201EXT_DCFILTOFFSET_I1, config->dcfiltoffsetI1);
	device->writeRegExt(CC1201EXT_DCFILTOFFSET_T0, config->dcfiltoffsetI0);
	device->writeRegExt(CC1201EXT_DCFILTOFFSET_Q1, config->dcfiltoffsetQ1);
	device->writeRegExt(CC1201EXT_DCFILTOFFSET_Q0, config->dcfiltoffsetQ0);
	device->writeRegExt(CC1201EXT_IQIE_I1, config->iqieI1);
	device->writeRegExt(CC1201EXT_IQIE_I0, config->iqieI0);
	device->writeRegExt(CC1201EXT_IQIE_Q1, config->iqieQ1);
	device->writeRegExt(CC1201EXT_IQIE_Q0, config->iqieQ0);
	device->writeRegExt(CC1201EXT_RSSI1, config->rssi1);
	device->writeRegExt(CC1201EXT_RSSI0, config->rssi0);
	device->writeRegExt(CC1201EXT_MARCSTATE, config->marcstate);
	device->writeRegExt(CC1201EXT_LQI_VAL, config->lqiVal);
	device->writeRegExt(CC1201EXT_PQT_SYNC_ERR, config->pqtSyncErr);
	device->writeRegExt(CC1201EXT_DEM_STATUS, config->demStatus);
	device->writeRegExt(CC1201EXT_FREQOFF_EST1, config->freqoffEst1);
	device->writeRegExt(CC1201EXT_FREQOFF_EST0, config->freqoffEst0);
	device->writeRegExt(CC1201EXT_AGC_GAIN3, config->agcGain3);
	device->writeRegExt(CC1201EXT_AGC_GAIN2, config->agcGain2);
	device->writeRegExt(CC1201EXT_AGC_GAIN1, config->agcGain1);
	device->writeRegExt(CC1201EXT_AGC_GAIN0, config->agcGain0);
	device->writeRegExt(CC1201EXT_CFM_RX_DATA_OUT, config->cfmRxDataOut);
	device->writeRegExt(CC1201EXT_CFM_RX_DATA_IN, config->cfmTxDataIn);
	device->writeRegExt(CC1201EXT_ASK_SOFT_RX_DATA, config->askSoftRxData);
	device->writeRegExt(CC1201EXT_RNDGEN, config->rndgen);
	device->writeRegExt(CC1201EXT_MAGN2, config->magn2);
	device->writeRegExt(CC1201EXT_MAGN1, config->magn1);
	device->writeRegExt(CC1201EXT_MAGN0, config->magn0);
	device->writeRegExt(CC1201EXT_ANG1, config->ang1);
	device->writeRegExt(CC1201EXT_ANG0, config->ang0);
	device->writeRegExt(CC1201EXT_CHFILT_I2, config->chfiltI2);
	device->writeRegExt(CC1201EXT_CHFILT_I1, config->chfiltI1);
	device->writeRegExt(CC1201EXT_CHFILT_I0, config->chfiltI0);
	device->writeRegExt(CC1201EXT_CHFILT_Q2, config->chfiltQ2);
	device->writeRegExt(CC1201EXT_CHFILT_Q1, config->chfiltQ1);
	device->writeRegExt(CC1201EXT_CHFILT_Q0, config->chfiltQ0);
	device->writeRegExt(CC1201EXT_GPIO_STATUS, config->gpioStatus);
	device->writeRegExt(CC1201EXT_FASCL_CTRL, config->fscalCtrl);
	device->writeRegExt(CC1201EXT_PHASE_ADJUST, config->phaseAdjust);
	device->writeRegExt(CC1201EXT_PARTNUMBER, config->partnumber);
	device->writeRegExt(CC1201EXT_PARTVERSION, config->partversion);
	device->writeRegExt(CC1201EXT_SERIAL_STATUS, config->serialStatus);
	device->writeRegExt(CC1201EXT_MODEM_STATUS1, config->modemStatus1);
	device->writeRegExt(CC1201EXT_MODEM_STATUS0, config->modemStatus0);
	device->writeRegExt(CC1201EXT_MARC_STATUS1, config->marcStatus1);
	device->writeRegExt(CC1201EXT_MARC_STATUS0, config->marcStatus0);
	device->writeRegExt(CC1201EXT_PA_IFAMP_TEST, config->paIfampTest);
	device->writeRegExt(CC1201EXT_FSRF_TEST, config->fsrfTest);
	device->writeRegExt(CC1201EXT_PRE_TEST, config->preTest);
	device->writeRegExt(CC1201EXT_PRE_OVR, config->preOvr);
	device->writeRegExt(CC1201EXT_ADC_TEST, config->adcTest);
	device->writeRegExt(CC1201EXT_DVC_TEST, config->dvcTest);
	device->writeRegExt(CC1201EXT_ATEST, config->atest);
	device->writeRegExt(CC1201EXT_ATEST_LVDS, config->atestLvds);
	device->writeRegExt(CC1201EXT_ATEST_MODE, config->atestMode);
	device->writeRegExt(CC1201EXT_XOSC_TEST1, config->xoscTest1);
	device->writeRegExt(CC1201EXT_XOSC_TEST0, config->xoscTest0);
	device->writeRegExt(CC1201EXT_AES, config->aes);
	device->writeRegExt(CC1201EXT_MDM_TEST, config->mdmTest);
	device->writeRegExt(CC1201EXT_RXFIRST, config->rxfirst);
	device->writeRegExt(CC1201EXT_TXFIRST, config->txfirst);
	device->writeRegExt(CC1201EXT_RXLAST, config->rxlast);
	device->writeRegExt(CC1201EXT_TXLAST, config->txlast);
	device->writeRegExt(CC1201EXT_NUM_TXBYTES, config->numTxbytes);
	device->writeRegExt(CC1201EXT_NUM_RXBYTES, config->numRxbytes);
	device->writeRegExt(CC1201EXT_FIFO_NUM_TXBYTES, config->fifoNumTxbytes);
	device->writeRegExt(CC1201EXT_FIFO_NUM_RXBYTES, config->fifoNumRxbytes);
	device->writeRegExt(CC1201EXT_RXFIFO_PRE_BUF, config->rxfifoPreBuf);
	//TODO implement AES coverage (be same as above, just need to look at data sheet)
	
	return device;
}

/**
 * Verifies the configuration readback of the given 1201 device against the prefered
 * configuration settings.
 */
bool CC1201Config::verifyConfiguration(CC1201Config* config, CC1201* device)
{
	//clear faults
	std::queue<string> empty;
	std::swap(configurationFaults, empty);

	uint8_t exp = 0x00;

    for (uint8_t reg = 0x00; reg <= 0x2E; reg++)
    {
		switch (reg)
		{
			case CC1201_IOCFG3: exp = config->iocfg3; break; 
			case CC1201_IOCFG2: exp = config->iocfg2; break; 
			case CC1201_IOCFG1: exp = config->iocfg1; break; 
			case CC1201_IOCFG0: exp = config->iocfg0; break; 
			case CC1201_SYNC3: exp = config->sync3; break; 
			case CC1201_SYNC2: exp = config->sync2; break; 
			case CC1201_SYNC1: exp = config->sync1; break; 
			case CC1201_SYNC0: exp = config->sync0; break; 
			case CC1201_SYNC_CFG1: exp = config->syncCfg1; break; 
			case CC1201_SYNC_CFG0: exp = config->syncCfg0; break; 
			case CC1201_DEVIATION_M: exp = config->deviationM; break; 
			case CC1201_MODCFG_DEV_E: exp = config->modcfgDevE; break; 
			case CC1201_DCFILT_CFG: exp = config->dcfiltCfg; break; 
			case CC1201_PREAMBLE_CFG1: exp = config->preambleCfg1; break; 
			case CC1201_PREAMBLE_CFG0: exp = config->preambleCfg0; break; 
			case CC1201_IQIC: exp = config->iqic; break; 
			case CC1201_CHAN_BW: exp = config->chanBw; break; 
			case CC1201_MDMCFG1: exp = config->mdmcfg1; break; 
			case CC1201_MDMCFG0: exp = config->mdmcfg0; break; 
			case CC1201_SYMBOL_RATE2: exp = config->symbolRate2; break; 
			case CC1201_SYMBOL_RATE1: exp = config->symbolRate1; break; 
			case CC1201_SYMBOL_RATE0: exp = config->symbolRate0; break; 
			case CC1201_AGC_REF: exp = config->agcRef; break; 
			case CC1201_AGC_CS_THR: exp = config->agcCsThr; break; 
			case CC1201_AGC_GAIN_ADJUST: exp = config->agcGainAdjust; break; 
			case CC1201_AGC_CFG3: exp = config->agcCfg3; break; 
			case CC1201_AGC_CFG2: exp = config->agcCfg2; break; 
			case CC1201_AGC_CFG1: exp = config->agcCfg1; break; 
			case CC1201_AGC_CFG0: exp = config->agcCfg0; break; 
			case CC1201_FIFO_CFG: exp = config->fifoCfg; break; 
			case CC1201_DEV_ADDR: exp = config->devAddr; break; 
			case CC1201_SETTLING_CFG: exp = config->settlingCfg; break; 
			case CC1201_FS_CFG: exp = config->fsCfg; break; 
			case CC1201_WOR_CFG1: exp = config->worCfg1; break; 
			case CC1201_WOR_CFG0: exp = config->worCfg0; break; 
			case CC1201_WOR_EVENT0_MSB: exp = config->worEvent0Msb; break; 
			case CC1201_WOR_EVENT0_LSB: exp = config->worEvent0Lsb; break; 
			case CC1201_RXDCM_TIME: exp = config->rxdcmTime; break; 
			case CC1201_PKT_CFG2: exp = config->pktCfg2; break; 
			case CC1201_PKT_CFG1: exp = config->pktCfg1; break; 
			case CC1201_PKT_CFG0: exp = config->pktCfg0; break; 
			case CC1201_RFEND_CFG1: exp = config->rfendCfg1; break; 
			case CC1201_RFEND_CFG0: exp = config->rfendCfg0; break; 
			case CC1201_PA_CFG1: exp = config->paCfg1; break; 
			case CC1201_PA_CFG0: exp = config->paCfg0; break; 
			case CC1201_ASK_CFG: exp = config->askCfg; break; 
			case CC1201_PKT_LEN: exp = config->pktLen; break;
			default: exp = 0x00;
		}

		if (device->readReg(reg) != exp)
		{
			//to_string doesn't seem to be supported by the mbed
			char regCStr[2];
			char valCStr[2];
			char expCStr[2];
			sprintf(regCStr, "%02X", reg);
			sprintf(valCStr, "%02X", device->readReg(reg));
			sprintf(expCStr, "%02X", exp);
			string regStr((const char*) regCStr, 2);
			string valStr((const char*) valCStr, 2);
			string expStr((const char*) expCStr, 2);
			string errorStr = ("Reg: " + regStr + ", Val: " + valStr + ", Exp: " + expStr);

			log(WARN, "CC1201Config::verifyConfiguration", errorStr.c_str());
			configurationFaults.push(errorStr);
		}
    }

    for (uint8_t extReg = 0x00; extReg <= 0x90 /*0xDA*/; extReg++)
    {
		if ((extReg >= 0x3A && extReg <= 0x63) || (extReg >= 0xA3 && extReg <= 0xFF)) //(extReg >= 0xA3 && extReg <= 0xD1) || (false))
			continue;
		else
		{
			switch (extReg)
			{
				case CC1201EXT_IF_MIX_CFG: exp = config->ifMixCfg; break;
				case CC1201EXT_FREQOFF_CFG: exp = config->freqoffCfg; break;
				case CC1201EXT_TOC_CFG: exp = config->tocCfg; break;
				case CC1201EXT_MARC_SPARE: exp = config->marcSpare; break;
				case CC1201EXT_ECG_CFG: exp = config->ecgCfg; break;
				case CC1201EXT_MDMCFG2: exp = config->mdmcfg2; break;
				case CC1201EXT_EXT_CTRL: exp = config->extCtrl; break;
				case CC1201EXT_RCCAL_FINE: exp = config->rccalFine; break;
				case CC1201EXT_RCCAL_COARSE: exp = config->rccalCoarse; break;
				case CC1201EXT_RCCAL_OFFSET: exp = config->rccalOffset; break;
				case CC1201EXT_FREQOFF1: exp = config->freqoff1; break;
				case CC1201EXT_FREQOFF0: exp = config->freqoff0; break;
				case CC1201EXT_FREQ2: exp = config->freq2; break;
				case CC1201EXT_FREQ1: exp = config->freq1; break;
				case CC1201EXT_FREQ0: exp = config->freq0; break;
				case CC1201EXT_IF_ADC2: exp = config->ifAdc2; break;
				case CC1201EXT_IF_ADC1: exp = config->ifAdc1; break;
				case CC1201EXT_IF_ADC0: exp = config->ifAdc0; break;
				case CC1201EXT_FS_DIG1: exp = config->fsDig1; break;
				case CC1201EXT_FS_DIG0: exp = config->fsDig0; break;
				case CC1201EXT_FS_CAL3: exp = config->fsCal3; break;
				case CC1201EXT_FS_CAL2: exp = config->fsCal2; break;
				case CC1201EXT_FS_CAL1: exp = config->fsCal1; break;
				case CC1201EXT_FS_CAL0: exp = config->fsCal0; break;
				case CC1201EXT_FS_CHP: exp = config->fsChp; break;
				case CC1201EXT_FS_DIVTWO: exp = config->fsDivtwo; break;
				case CC1201EXT_FS_DSM1: exp = config->fsDsm1; break;
				case CC1201EXT_FS_DMS0: exp = config->fsDsm0; break;
				case CC1201EXT_FS_DVC1: exp = config->fsDvc1; break;
				case CC1201EXT_FS_DVC0: exp = config->fsDvc0; break;
				case CC1201EXT_FS_LBI: exp = config->fsLbi; break;
				case CC1201EXT_FS_PFD: exp = config->fsPfd; break;
				case CC1201EXT_FS_PRE: exp = config->fsPre; break;
				case CC1201EXT_FS_REG_DIV_CML: exp = config->fsRegDivCml; break;
				case CC1201EXT_FS_SPARE: exp = config->fsSpare; break;
				case CC1201EXT_FS_VCO4: exp = config->fsVco4; break;
				case CC1201EXT_FS_VCO3: exp = config->fsVco3; break;
				case CC1201EXT_FS_VCO2: exp = config->fsVco2; break;
				case CC1201EXT_FS_VCO1: exp = config->fsVco1; break;
				case CC1201EXT_FS_VCO0: exp = config->fsVco0; break;
				case CC1201EXT_GBIAS6: exp = config->gbias6; break;
				case CC1201EXT_GBIAS5: exp = config->gbias5; break;
				case CC1201EXT_GBIAS4: exp = config->gbias4; break;
				case CC1201EXT_GBIAS3: exp = config->gbias3; break;
				case CC1201EXT_GBIAS2: exp = config->gbias2; break;
				case CC1201EXT_GBIAS1: exp = config->gbias1; break;
				case CC1201EXT_GBIAS0: exp = config->gbias0; break;
				case CC1201EXT_IFAMP: exp = config->ifamp; break;
				case CC1201EXT_LNA: exp = config->lna; break;
				case CC1201EXT_RXMIX: exp = config->rxmix; break;
				case CC1201EXT_XOSC5: exp = config->xosc5; break;
				case CC1201EXT_XOSC4: exp = config->xosc4; break;
				case CC1201EXT_XOSC3: exp = config->xosc3; break;
				case CC1201EXT_XOSC2: exp = config->xosc2; break;
				case CC1201EXT_XOSC1: exp = config->xosc1; break;
				case CC1201EXT_XOSC0: exp = config->xosc0; break;
				case CC1201EXT_ANALOG_SPARE: exp = config->analogSpare; break;
				case CC1201EXT_PA_CFG3: exp = config->paCfg3; break;
				case CC1201EXT_WOR_TIME1: exp = config->worTime1; break;
				case CC1201EXT_WOR_TIME0: exp = config->worTime0; break;
				case CC1201EXT_WOR_CAPTURE1: exp = config->worCapture1; break;
				case CC1201EXT_WOR_CAPTURE0: exp = config->worCapture0; break;
				case CC1201EXT_BIST: exp = config->bist; break;
				case CC1201EXT_DCFILTOFFSET_I1: exp = config->dcfiltoffsetI1; break;
				case CC1201EXT_DCFILTOFFSET_T0: exp = config->dcfiltoffsetI0; break;
				case CC1201EXT_DCFILTOFFSET_Q1: exp = config->dcfiltoffsetQ1; break;
				case CC1201EXT_DCFILTOFFSET_Q0: exp = config->dcfiltoffsetQ0; break;
				case CC1201EXT_IQIE_I1: exp = config->iqieI1; break;
				case CC1201EXT_IQIE_I0: exp = config->iqieI0; break;
				case CC1201EXT_IQIE_Q1: exp = config->iqieQ1; break;
				case CC1201EXT_IQIE_Q0: exp = config->iqieQ0; break;
				case CC1201EXT_RSSI1: exp = config->rssi1; break;
				case CC1201EXT_RSSI0: exp = config->rssi0; break;
				case CC1201EXT_MARCSTATE: exp = config->marcstate; break;
				case CC1201EXT_LQI_VAL: exp = config->lqiVal; break;
				case CC1201EXT_PQT_SYNC_ERR: exp = config->pqtSyncErr; break;
				case CC1201EXT_DEM_STATUS: exp = config->demStatus; break;
				case CC1201EXT_FREQOFF_EST1: exp = config->freqoffEst1; break;
				case CC1201EXT_FREQOFF_EST0: exp = config->freqoffEst0; break;
				case CC1201EXT_AGC_GAIN3: exp = config->agcGain3; break;
				case CC1201EXT_AGC_GAIN2: exp = config->agcGain2; break;
				case CC1201EXT_AGC_GAIN1: exp = config->agcGain1; break;
				case CC1201EXT_AGC_GAIN0: exp = config->agcGain0; break;
				case CC1201EXT_CFM_RX_DATA_OUT: exp = config->cfmRxDataOut; break;
				case CC1201EXT_CFM_RX_DATA_IN: exp = config->cfmTxDataIn; break;
				case CC1201EXT_ASK_SOFT_RX_DATA: exp = config->askSoftRxData; break;
				case CC1201EXT_RNDGEN: exp = config->rndgen; break;
				case CC1201EXT_MAGN2: exp = config->magn2; break;
				case CC1201EXT_MAGN1: exp = config->magn1; break;
				case CC1201EXT_MAGN0: exp = config->magn0; break;
				case CC1201EXT_ANG1: exp = config->ang1; break;
				case CC1201EXT_ANG0: exp = config->ang0; break;
				case CC1201EXT_CHFILT_I2: exp = config->chfiltI2; break;
				case CC1201EXT_CHFILT_I1: exp = config->chfiltI1; break;
				case CC1201EXT_CHFILT_I0: exp = config->chfiltI0; break;
				case CC1201EXT_CHFILT_Q2: exp = config->chfiltQ2; break;
				case CC1201EXT_CHFILT_Q1: exp = config->chfiltQ1; break;
				case CC1201EXT_CHFILT_Q0: exp = config->chfiltQ0; break;
				case CC1201EXT_GPIO_STATUS: exp = config->gpioStatus; break;
				case CC1201EXT_FASCL_CTRL: exp = config->fscalCtrl; break;
				case CC1201EXT_PHASE_ADJUST: exp = config->phaseAdjust; break;
				case CC1201EXT_PARTNUMBER: exp = config->partnumber; break;
				case CC1201EXT_PARTVERSION: exp = config->partversion; break;
				case CC1201EXT_SERIAL_STATUS: exp = config->serialStatus; break;
				case CC1201EXT_MODEM_STATUS1: exp = config->modemStatus1; break;
				case CC1201EXT_MODEM_STATUS0: exp = config->modemStatus0; break;
				case CC1201EXT_MARC_STATUS1: exp = config->marcStatus1; break;
				case CC1201EXT_MARC_STATUS0: exp = config->marcStatus0; break;
				case CC1201EXT_PA_IFAMP_TEST: exp = config->paIfampTest; break;
				case CC1201EXT_FSRF_TEST: exp = config->fsrfTest; break;
				case CC1201EXT_PRE_TEST: exp = config->preTest; break;
				case CC1201EXT_PRE_OVR: exp = config->preOvr; break;
				case CC1201EXT_ADC_TEST: exp = config->adcTest; break;
				case CC1201EXT_DVC_TEST: exp = config->dvcTest; break;
				case CC1201EXT_ATEST: exp = config->atest; break;
				case CC1201EXT_ATEST_LVDS: exp = config->atestLvds; break;
				case CC1201EXT_ATEST_MODE: exp = config->atestMode; break;
				case CC1201EXT_XOSC_TEST1: exp = config->xoscTest1; break;
				case CC1201EXT_XOSC_TEST0: exp = config->xoscTest0; break;
				case CC1201EXT_AES: exp = config->aes; break;
				case CC1201EXT_MDM_TEST: exp = config->mdmTest; break;
				default: exp = 0x00;
			}

			if (device->readRegExt(extReg) != exp)
			{
				//to_string doesn't seem to be supported by the mbed
				char regCStr[2];
				char valCStr[2];
				char expCStr[2];
				sprintf(regCStr, "%02X", extReg);
				sprintf(valCStr, "%02X", device->readRegExt(extReg));
				sprintf(expCStr, "%02X", exp);
				string regStr((const char*) regCStr, 2);
				string valStr((const char*) valCStr, 2);
				string expStr((const char*) expCStr, 2);
				string errorStr = ("ExtReg: " + regStr + ", Val: " + valStr + ", Exp: " + expStr);

				//log(WARN, "CC1201Config::verifyConfiguration", errorStr.c_str());
				configurationFaults.push(errorStr);
			}
		}
    }

    return configurationFaults.empty();	
}

/**
 *
 */
void CC1201Config::loadLinkedDevice(void)
{
	CC1201Config::loadConfiguration(this, this->getDeviceLink());
}
