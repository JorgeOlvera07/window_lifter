/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: indicatorscontrol.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \APP file for LED indicator control.
    
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
/*  AUTHOR             |   VERSION    |            DESCRIPTION                */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia     |      5       |  APP file for LED indicator control.  */
/*  Jorge Olvera       |      5       |  APP file for LED indicator control.  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: indicatorscontrol.h  $
  ============================================================================*/
#ifndef INDICATORSCONTROL_H
#define INDICATORSCONTROL_H

/* Includes */
/*============================================================================*/
#include "HAL/indicators.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void ic_void_onIndicator_Up();
void ic_void_offIndicator_Up();

void ic_void_onIndicator_Down();
void ic_void_offIndicator_Down();

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
