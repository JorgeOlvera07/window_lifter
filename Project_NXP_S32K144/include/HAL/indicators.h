/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: indicators.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \HAL file for indicator's enabling.
    
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
/*  AUTHOR             |    VERSION     |           DESCRIPTION               */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia     |       5        | HAL file for indicator's enabling.  */
/*  Jorge Olvera       |       5        | HAL file for indicator's enabling.  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: indicators.h  $
  ============================================================================*/
#ifndef INDICATORS_H
#define INDICATORS_H

/* Includes */
/*============================================================================*/
#include "MAL/mal_gpio.h"

/* Defines */
/*============================================================================*/
#define UP_Indicator PTD0
#define DOWN_Indicator PTD16
#define  INDICATOR_PTD PTD


/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void indicator_void_config_indicator(S_GPIO_Type* PT, S_PORT_Type * PORT, T_UWORD numbit, T_UWORD mux);
void indicator_void_set_indicator(S_GPIO_Type* PT, T_UWORD numbit);
void indicator_void_clear_indicator(S_GPIO_Type* PT, T_UWORD numbit);
#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
