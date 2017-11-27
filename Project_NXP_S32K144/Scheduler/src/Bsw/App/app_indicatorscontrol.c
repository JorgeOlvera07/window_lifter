/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_indicatorscontrol.c $
 * $Revision: version #6 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    APP file to control the indicators

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
/*    Author         |      Version       |       Description                 */
/*----------------------------------------------------------------------------*/
/* Olvera Jorge      |           5        | APP file to control the indicators*/
/* Archundia Luis    |           5        | APP file to control the indicators*/
/* Luis Archundia    |           6        | File name modified to comply with */
/*		     |	                  | naming convention standards.      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: app_indicatorscontrol.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "app_indicatorscontrol.h"


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
	indicator_void_clear_indicator(PORTCH_D,UP_Indicator);
}
void ic_void_offIndicator_Up(){
	indicator_void_set_indicator(PORTCH_D,UP_Indicator);
}

void ic_void_onIndicator_Down(){
	indicator_void_clear_indicator(PORTCH_D,DOWN_Indicator);
}
void ic_void_offIndicator_Down(){
	indicator_void_set_indicator(PORTCH_D,DOWN_Indicator);
}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
