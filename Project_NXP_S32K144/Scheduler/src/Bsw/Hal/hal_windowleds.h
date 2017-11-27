/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: windowleds.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \HAL file for ledBar's config.
    
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
/*  Luis Archundia     |         5          |  HAL file for ledBar's config.  */
/*  Jorge Olvera       |         5          |  HAL file for ledBar's config.  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: windowleds.h  $
  ============================================================================*/
#ifndef WINDOWLEDS_H
#define WINDOWLEDS_H

/* Includes */
/*============================================================================*/
#include "Dio.h"


/* Defines */
/*============================================================================*/
#define WINDOW_LED1  7
#define WINDOW_LED2  17
#define WINDOW_LED3  14
#define WINDOW_LED4  15
#define WINDOW_LED5  16
#define WINDOW_LED6  3
#define WINDOW_LED7  16
#define WINDOW_LED8  15
#define WINDOW_LED9  14
#define WINDOW_LED10 13


#define UP_Indicator   0 // Blue Led indicator UP
#define DOWN_Indicator 16 // Green Led indicator DOWN

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void windowleds_void_openBit_Window(DioPortType DioPort, uint32_t DioPin);
void windowleds_void_closeBit_Window(DioPortType DioPort, uint32_t DioPin);

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
