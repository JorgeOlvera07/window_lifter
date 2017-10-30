/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: watchdog.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \MAL file for watchdog configuration.
    
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
/*  AUTHOR             |   VERSION    |              DESCRIPTION              */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia     |      5       | MAL file for watchdog configuration.  */
/*  Jorge Olvera       |      5       | MAL file for watchdog configuration.  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: watchdog.h  $
  ============================================================================*/
#ifndef WATCHDOG_H
#define WATCHDOG_H

/* Includes */
/*============================================================================*/
#include "S32K144.h"
#include "MAL/namingconventions.h"
/* Defines */
/*============================================================================*/

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

void watchdog_void_config_watchdog(S_WDOG_Type * pWD, int CNT, int TOVAL, int CS );
#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
