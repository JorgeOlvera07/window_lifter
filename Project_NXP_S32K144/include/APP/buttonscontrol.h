/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: buttonscontrol.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \APP file for button control config.
    
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
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: buttonscontrol.h  $
  ============================================================================*/
#ifndef BUTTONSCONTROL_H
#define BUTTONSCONTROL_H

/* Includes */
/*============================================================================*/
#include "HAL/buttons.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
T_UBYTE bc_T_UBYTE_statusButt_Up();
T_UBYTE bc_T_UBYTE_statusButt_Down();
void bc_void_clearFlag_AntiPinch();


#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
