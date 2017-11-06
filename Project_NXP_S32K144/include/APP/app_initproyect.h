/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_intiproyect.h $
 * $Revision: version #6 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \APP file for module's initialization.

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
/*	Jorge Olvera	   |	   7       |  naming convention standards.        */
/*   Olvera Jorge      |       8       | File name modified to comply with    */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: app_intproyect.h  $
  ============================================================================*/
#ifndef INITPROYECT_H
#define INITPROYECT_H

/* Includes */
/*============================================================================*/
#include "S32K144.h"

#include "HAL/hal_buttons.h"
#include "HAL/hal_windowleds.h"
#include "HAL/hal_indicators.h"
#include "SERVICES_SYSTEM/services_timer.h"
#include "SERVICES_SYSTEM/services_enableports.h"
#include "SERVICES_SYSTEM/services_enableclc.h"
#include "SERVICES_SYSTEM/services_enablenvic.h"
#include "SERVICES_SYSTEM/services_initwd.h"
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
