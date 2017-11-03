/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_timer1ms.c $
 * $Revision: version #6 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    APP file to use the timer lpit ch0.

    * Changed name of file in order to comply with naming convention
      standards - 03/11/2017
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
/*    Author         |      Version       |       Description                 */
/*----------------------------------------------------------------------------*/
/* Olvera Jorge      |           5        | APP file to control the indicators*/
/* Archundia Luis    |           5        | APP file to control the indicators*/
/* Luis Archundia    |           6        | File name modified to comply with */
/*		     |	                  | naming convention standards.      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: app_timer1ms.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "APP/app_timer1ms.h"


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

void tmr1ms_void_initTimer1ms(){
	timer_void_configTime(LPIT0,40000);
}

void tmr1ms_void_EnableTimer1ms (){
	timer_void_enable_Timer(LPIT0,40000);
}

void tmr1ms_void_DisableTimer1ms (){
	timer_void_disable_Timer(LPIT0);
}

void tmr1ms_void_clearFlagTimer1ms(){
	timer_void_clearFlag_lpitCh0(LPIT0,LPIT_MSR_TIF0_MASK);
}

 /* Notice: the file ends with a blank new line to avoid compiler warnings */
