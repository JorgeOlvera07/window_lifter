/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: enableports.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \HAL file for port enabling.
    
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
/*  Luis Archundia     |         5          |   HAL file for port enabling.   */
/*  Jorge Olvera       |         5          |   HAL file for port enabling.   */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: enableports.h  $
  ============================================================================*/
#ifndef ENABLEPORTS_H
#define ENABLEPORTS_H

/* Includes */
/*============================================================================*/

#include "MAL/mal_pccports.h"
/* Defines */
/*============================================================================*/


#define PCCPORTB PCC_PORTB_INDEX
#define PCCPORTC PCC_PORTC_INDEX
#define PCCPORTD PCC_PORTD_INDEX
#define PCCPORTE PCC_PORTE_INDEX

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/


void enableports_void_enable_PCC_Port(T_UWORD configPCC);

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */

