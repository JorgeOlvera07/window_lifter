/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: enableports.c $
 * $Revision: version 5 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    HAL file to enable the ports´pin
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
/* Olvera Jorge      |           5        | HAL file to enable                */
/* Archundia Luis    |           5        | the ports´pin                     */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: enableports.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "HAL/enableports.h"



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


void enableports_void_enable_PCC_Port(T_UWORD configPCC){
	pccports_void_config_PCC_PORT(configPCC);
}

/* Notice: the file ends with a blank new line to avoid compiler warnings */

