/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: buttons.c $
 * $Revision: version 8 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    HAL file to configure the buttons                                         */
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
/* Olvera Jorge      |           5        | HAL file to configure             */
/* Archundia Luis    |           5        | the buttons                       */
/*	Olvera Jorge	 |	         7        |  naming convention standards.     */
/*   Olvera Jorge    |           8        | File name modified to comply with */

/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: buttons.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "hal_buttons.h"
//#include "MAL/gpio.h"


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

T_UBYTE buttons_T_UBYTE_get_Button_Value(DioPortType DioPort, uint32_t DioPin){

	return (Dio_PortGetPin(DioPort,DioPin));

}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
