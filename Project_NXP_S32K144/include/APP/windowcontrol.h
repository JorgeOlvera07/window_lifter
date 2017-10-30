/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: windowcontrol.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \APP file for window control interface.
    
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
/*  AUTHOR           |    VERSION   |              DESCRIPTION                */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia   |       5      | APP file for window control interface.  */
/*  Jorge Olvera     |       5      | APP file for window control interface.  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: windowcontrol.h  $
  ============================================================================*/
//#ifndef FILENAME_H
//#define FILENAME_H

/* Includes */
/*============================================================================*/
//#include "S32K144.h" /* include peripheral declarations S32K144 */
//#include "MAL/gpio.h"
#include "HAL/windowleds.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void wc_void_ControlWindowUp (T_UBYTE * porcent);
void wc_void_ControlWindowDown (T_UBYTE * porcent);


//#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
