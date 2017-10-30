/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: interrup.c $
 * $Revision: version 5 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    MAL file to initialize and configure the timer´s interrup
*/
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*    Author           |      Version       |       Description               */
/*----------------------------------------------------------------------------*/
/* Olvera Jorge        |           5        | MAL file to initialize and      */
/* Archundia Luis      |           5        | configure the timer´s interrup  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: interrup.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "MAL/interrup.h"

/* Defines */
/*============================================================================*/
#define TIMER0 LPIT0

/* Constants and types  */
/*============================================================================*/



/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/


/* Private functions */
/*============================================================================*/


/* Exported functions */
/*============================================================================*/

void interrup_void_enableClocks(S_PCC_Type *pPCC, T_UWORD clocksrc, T_UWORD enablelpit0){
	pPCC->PCCn[PCC_LPIT_INDEX] = PCC_PCCn_PCS(clocksrc); /* Clock Src = 6 (SPLL2_DIV2_CLK)*/
	pPCC->PCCn[PCC_LPIT_INDEX] |= enablelpit0; /* Enable clk to LPIT0 regs */

}

void interrup_void_configureTimerChanel(S_LPIT_Type *pLPIT, T_UWORD chanel){


	pLPIT->MCR = chanel;
	LPIT0->MIER = chanel;
}

void interrup_void_ch0TimeoutPeriodClocks(S_LPIT_Type *pLPIT, T_UWORD period){
	pLPIT->TMR[0].TVAL = period;//1 ms = 40000
}
void interrup_void_enableTimer(S_LPIT_Type *pLPIT, T_UWORD period){
	pLPIT->TMR[0].TVAL = period;
	pLPIT->TMR[0].TCTRL = 0x00000001;
}
void interrup_void_disableTimer(S_LPIT_Type *pLPIT){
	pLPIT->TMR[0].TCTRL = 0x00000000;
}

void interrup_void_clearFlag_lpitCh0(S_LPIT_Type *pLPIT,T_UWORD mask){
	pLPIT->MSR |= mask; /* LPIT_MSR_TIF0_MASK Clear LPIT0 timer flag 0 */
}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
