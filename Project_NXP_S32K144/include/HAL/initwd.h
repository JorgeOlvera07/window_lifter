/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: initwd.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \HAL file for Watchdog init.
    
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
/*  Luis Archundia     |         5          |    HAL file for Watchdog init.  */
/*  Jorge Olvera       |         5          |    HAL file for Watchdog init.  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: initwd.h  $
  ============================================================================*/
#ifndef INITWD_H
#define INITWD_H

/* Includes */
/*============================================================================*/

#include "MAL/watchdog.h"
/* Defines */
/*============================================================================*/


#define maskcnt 0xD928C520
#define masktoval 0x0000FFFF
#define maskcs 0x00002100

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

void initwd_void_initWatchdog(S_WDOG_Type * pWD, T_UWORD CNT, T_UWORD TOVAL, T_UWORD CS);
#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
