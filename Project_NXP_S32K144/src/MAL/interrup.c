/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.c $
 * $Revision: version $
 * $Author: author $
 * $Date: date $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    short description in one sentence end with dot.
    detailed
    multiline
    description of the file
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
/*  DATABASE           |        PROJECT     | FILE VERSION (AND INSTANCE)     */
/*----------------------------------------------------------------------------*/
/*                     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.c  $
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

void enableClocks(PCC_Type *pPCC, int clocksrc, int enablelpit0){
	pPCC->PCCn[PCC_LPIT_INDEX] = PCC_PCCn_PCS(clocksrc); /* Clock Src = 6 (SPLL2_DIV2_CLK)*/
	pPCC->PCCn[PCC_LPIT_INDEX] |= enablelpit0; /* Enable clk to LPIT0 regs */

}

void configureTimerChanel(LPIT_Type *pLPIT, int chanel){


	pLPIT->MCR = chanel;
	LPIT0->MIER = chanel;
}

void ch0TimeoutPeriodClocks(LPIT_Type *pLPIT, int period){
	pLPIT->TMR[0].TVAL = period;//1 ms = 40000
}
void enableTimer(LPIT_Type *pLPIT, int period){
	pLPIT->TMR[0].TVAL = period;
	pLPIT->TMR[0].TCTRL = 0x00000001;
}
void disableTimer(LPIT_Type *pLPIT){
	pLPIT->TMR[0].TCTRL = 0x00000000;
}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
