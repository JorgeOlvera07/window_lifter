/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: timer.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \HAL file for timer enabling.
    
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
/*  AUTHOR             |      VERSION       |        DESCRIPTION              */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia     |         5          |    HAL file for timer enabling.  */
/*  Jorge Olvera       |         5          |    HAL file for timer enabling.  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: timer.h  $
  ============================================================================*/
#ifndef TIMER_H
#define TIMER_H

/* Includes */
/*============================================================================*/
#include "MAL/interrup.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void timer_void_initLPIT0_Timer(S_PCC_Type *pPCC, S_LPIT_Type *pLPIT,T_UWORD clocksrc, T_UWORD enablelpit0, T_UWORD chanel);
void timer_void_configTime(S_LPIT_Type *pLPIT, T_UWORD period);
void timer_void_enable_Timer(S_LPIT_Type *pLPIT, T_UWORD period);
void timer_void_disable_Timer(S_LPIT_Type *pLPIT);
void timer_void_clearFlag_lpitCh0(S_LPIT_Type *pLPIT, T_UWORD mask);

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
