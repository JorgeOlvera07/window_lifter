/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.x $
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
 * $Log: timer1ms.h  $
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
