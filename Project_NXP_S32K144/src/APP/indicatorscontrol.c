/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.c $
 * $Revision: version $
 * $Author: author $
 * $Date: datee $
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
