/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: indicatorscontrol.c $
 * $Revision: version 5 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    APP file to control the indicators
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
/*    Author           |      Version       |       Description               */
/*----------------------------------------------------------------------------*/
/* Olvera Jorge      |           5        | APP file to control             */
/* Archundia Luis    |           5        | the indicators                       */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: indicatorscontrol.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "APP/indicatorscontrol.h"


/* Constants and types  */
/*============================================================================*/



/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/


/* Exported functions */
/*============================================================================*/
void ic_void_onIndicator_Up(){
	indicator_void_clear_indicator(INDICATOR_PTD,UP_Indicator);
}
void ic_void_offIndicator_Up(){
	indicator_void_set_indicator(INDICATOR_PTD,UP_Indicator);
}

void ic_void_onIndicator_Down(){
	indicator_void_clear_indicator(INDICATOR_PTD,DOWN_Indicator);
}
void ic_void_offIndicator_Down(){
	indicator_void_set_indicator(INDICATOR_PTD,DOWN_Indicator);
}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
