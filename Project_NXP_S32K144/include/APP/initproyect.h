/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: intiproyect.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \APP file for module's initialization.
    
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
/*  Luis Archundia     |         5          |    APP file for module's init.  */
/*  Jorge Olvera       |         5          |    APP file for module's init.  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: intproyect.h  $
  ============================================================================*/
#ifndef INITPROYECT_H
#define INITPROYECT_H

/* Includes */
/*============================================================================*/
#include "S32K144.h"

#include "HAL/buttons.h"
#include "HAL/windowleds.h"
#include "HAL/indicators.h"
#include "HAL/timer.h"
#include "HAL/enableports.h"
#include "HAL/enableclc.h"
#include "HAL/enablenvic.h"
#include "HAL/initwd.h"
/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

void ip_void_LPIT0Timer_init (void);
void ip_void_WindowInit (void);
void ip_void_IndicatorsInit (void);
void ip_void_EnablePCC (void);
void ip_void_ButtonsInit (void);
void ip_void_EnableClocksandModes (void);
void ip_void_EnableNVIC(void);
void ip_void_DisableWatchdog(void);


#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
