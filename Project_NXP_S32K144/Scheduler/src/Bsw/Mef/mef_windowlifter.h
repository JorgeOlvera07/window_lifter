/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_buttonscontrol.h $
 * $Revision: version #6 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \APP file for button control config.
     
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
/*  AUTHOR             |    VERSION    |            DESCRIPTION               */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia     |       5       |  APP file for button control config. */
/*  Jorge Olvera       |       5       |  APP file for button control config. */
/*  Luis Archundia     |       6       |  File name modified to comply with   */
/*	Jorge Olvera	   |	   7       |  naming convention standards.        */
/*   Olvera Jorge      |       8       | File name modified to comply with */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: app_buttonscontrol.h  $
  ============================================================================*/
#ifndef MEF_WINDOWLIFTER_H
#define MEF_WINDOWLIFTER_H

/* Includes */
/*============================================================================*/
#include "Std_Types.h"
#include "app_buttonscontrol.h"
#include "app_indicatorscontrol.h"
#include "app_windowcontrol.h"
#include "Dio.h"



/* Defines */
/*============================================================================*/

#define NumberOfCycles (uint32_t)2700

#define WINDOW_LED1        7
#define WINDOW_LED2        17
#define WINDOW_LED3        14
#define WINDOW_LED4        15
#define WINDOW_LED5        16
#define WINDOW_LED6        3
#define WINDOW_LED7        16
#define WINDOW_LED8        15
#define WINDOW_LED9        14
#define WINDOW_LED10       13

#define BUTTON_UP          12
#define BUTTON_DOWN        13
#define BUTTON_ANTIPINCH   1

#define INDICATOR_UP       0
#define INDICATOR_DOWN     16

/*
#define PINBKG        13
#define PIN_1MS       7
#define PIN_2MS       17
#define PINOVERLOAD   14
*/

#define _1ms 1
#define _10ms 10
#define _500ms 500
#define _400ms 400
#define _1000ms 1000
#define _3000ms 3000
#define _5000ms 5000


/* Constants and types */
/*============================================================================*/
typedef enum{
	WAIT_FOR_A_PULSE     = (T_UBYTE)  0x00u,
	VALIDATE_A_PULSE     = (T_UBYTE)  0X01u,
	CHOOSE_TYPE_WORK     = (T_UBYTE)  0X02u,
	AUTOMATIC_WORK       = (T_UBYTE)  0X03u,
	SEMIAUTOMATIC_WORK   = (T_UBYTE)  0X04u,
	ANTIPINCH_WORK       = (T_UBYTE)  0X05u,
	STOP_5_SECONDS       = (T_UBYTE)  0X06u,
}E_StatesMefWindoLifter;


typedef struct {

	T_UBYTE bi1_flagAutomaticUp:1;
	T_UBYTE bi1_flagAutomaticDown:1;
	T_UBYTE bi1_flagSemiautomaticUp:1;
	T_UBYTE bi1_flagSemiautomaticDown:1;
	T_UBYTE bi1_flagUp:1;
	T_UBYTE bi1_flagDown:1;
	T_UBYTE bi1_FlagAntipinch:1;
	T_UBYTE bi1_flagWaiting5Secons:1;

}S_Structflags;


/* Exported Variables */
/*============================================================================*/

S_Structflags rs_Fg;


/* Exported functions prototypes */
/*============================================================================*/
void windowlifter_void_MefWindowLifter(T_UWORD *lpuw_CounterTime1ms);


#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
