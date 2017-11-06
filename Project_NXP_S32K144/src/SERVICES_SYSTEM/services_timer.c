/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: timer.c $
 * $Revision: version 7 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
     HAL file to initialize the timer
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
/* Olvera Jorge      |           5        | HAL file to initialize            */
/* Archundia Luis    |           5        | the timer                         */
/*	Olvera Jorge	 |	         6        |  naming convention standards.     */
/*   Olvera Jorge    |           7        | File name modified to comply with */

/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: timer.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "SERVICES_SYSTEM/services_timer.h"


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

void timer_void_initLPIT0_Timer(S_PCC_Type *pPCC, S_LPIT_Type *pLPIT,T_UWORD clocksrc, T_UWORD enablelpit0, T_UWORD chanel){
	interrup_void_enableClocks(pPCC, clocksrc, enablelpit0);
	interrup_void_configureTimerChanel(pLPIT, chanel);

}
void timer_void_configTime(S_LPIT_Type *pLPIT, T_UWORD period){
	interrup_void_ch0TimeoutPeriodClocks(pLPIT,period);
}
void timer_void_enable_Timer(S_LPIT_Type *pLPIT, T_UWORD period){
	interrup_void_enableTimer(pLPIT,period);
}

void timer_void_disable_Timer(S_LPIT_Type *pLPIT){
	interrup_void_disableTimer(pLPIT);
}

void timer_void_clearFlag_lpitCh0(S_LPIT_Type *pLPIT, T_UWORD mask){
	interrup_void_clearFlag_lpitCh0(pLPIT,mask);
}


 /* Notice: the file ends with a blank new line to avoid compiler warnings */
