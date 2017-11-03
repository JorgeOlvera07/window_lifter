/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_timer1ms.h $
 * $Revision: version #6 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \APP file for 1ms counter enabling.

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
/*  AUTHOR             |    VERSION    |            DESCRIPTION               */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia     |       5       |  APP file for button control config. */
/*  Jorge Olvera       |       5       |  APP file for button control config. */
/*  Luis Archundia     |       6       |  File name modified to comply with   */
/*		       |	       |  naming convention standards.        */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: app_timer1ms.h  $
  ============================================================================*/
#ifndef TIMER1MS_H
#define TIMER1MS_H

/* Includes */
/*============================================================================*/
#include "HAL/timer.h"

/* Defines */
/*============================================================================*/
#define _1ms 1
#define _10ms 10
#define _500ms 500
#define _400ms 400
#define _1000ms 1000
#define _3000ms 3000
#define _5000ms 5000


/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void tmr1ms_void_initTimer1ms();
void tmr1ms_void_EnableTimer1ms ();
void tmr1ms_void_DisableTimer1ms ();
void tmr1ms_void_clearFlagTimer1ms();

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
