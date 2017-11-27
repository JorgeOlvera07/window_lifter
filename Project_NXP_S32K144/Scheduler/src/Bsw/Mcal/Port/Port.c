/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: Port.c $
 * $Revision: 3 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 17/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \
    
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
/*  Luis Archundia     |         3          |                                 */
/*  Jorge Olvera       |         3          |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: Port.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/

#include "General.h"          /* include peripheral declarations */
#include "Port.h"


/* Defines */
/*============================================================================*/



/* Constants and types */
/*============================================================================*/



/* Exported Variables */
/*============================================================================*/


/* Exported functions */
/*============================================================================*/

void PORT_init (void) {


  //------------------PORTB
  PCC-> PCCn[PCC_PORTB_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT B */

  //initialize LED 2 WINDOW LIFTER
  PTB->PDDR |= 1<<WINDOW_LED2;
  PORTB->PCR[WINDOW_LED2] = 0x00000100;
  PTB->PCOR |= 1<<WINDOW_LED2;

  //initialize LED 3 WINDOW LIFTER
  PTB->PDDR |= 1<<WINDOW_LED3;
  PORTB->PCR[WINDOW_LED3] = 0x00000100;
  PTB->PCOR |= 1<<WINDOW_LED3;

  //initialize LED 4 WINDOW LIFTER
  PTB->PDDR |= 1<<WINDOW_LED4;
  PORTB->PCR[WINDOW_LED4] = 0x00000100;
  PTB->PCOR |= 1<<WINDOW_LED4;

  //initialize LED 5 WINDOW LIFTER
  PTB->PDDR |= 1<<WINDOW_LED5;
  PORTB->PCR[WINDOW_LED5] = 0x00000100;
  PTB->PCOR |= 1<<WINDOW_LED5;



  //------------------PORTC
  PCC-> PCCn[PCC_PORTC_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT C */

  //initialize LED 1 WINDOW LIFTER
  PTC->PDDR |= 1<<WINDOW_LED1;
  PORTC->PCR[WINDOW_LED1] = 0x00000100;
  PTC->PCOR |= 1<<WINDOW_LED1;

  //initialize LED 6 WINDOW LIFTER
  PTC->PDDR |= 1<<WINDOW_LED6;
  PORTC->PCR[WINDOW_LED6] = 0x00000100;
  PTC->PCOR |= 1<<WINDOW_LED6;


  //Initialize BUTTON_UP
  PTC->PDDR &= ~(1<<BUTTON_UP);
  PORTC->PCR[BUTTON_UP] = 0x00000110;

  //Initialize BUTTON_DOWN
  PTC->PDDR &= ~(1<<BUTTON_DOWN);
  PORTC->PCR[BUTTON_DOWN] = 0x00000110;



  //------------------PORTE
  PCC-> PCCn[PCC_PORTE_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT E */

  //initialize LED 7 WINDOW LIFTER
  PTE->PDDR |= 1<<WINDOW_LED7;
  PORTE->PCR[WINDOW_LED7] = 0x00000100;
  PTE->PCOR |= 1<<WINDOW_LED7;

  //initialize LED 8 WINDOW LIFTER
  PTE->PDDR |= 1<<WINDOW_LED8;
  PORTE->PCR[WINDOW_LED8] = 0x00000100;
  PTE->PCOR |= 1<<WINDOW_LED8;

  //initialize LED 9 WINDOW LIFTER
  PTE->PDDR |= 1<<WINDOW_LED9;
  PORTE->PCR[WINDOW_LED9] = 0x00000100;
  PTE->PCOR |= 1<<WINDOW_LED9;

  //initialize LED 10 WINDOW LIFTER
  PTE->PDDR |= 1<<WINDOW_LED10;
  PORTE->PCR[WINDOW_LED10] = 0x00000100;
  PTE->PCOR |= 1<<WINDOW_LED10;

  //Initialize BUTTON_ANTIPINCH
  PTE->PDDR &= ~(1<<BUTTON_ANTIPINCH);
  PORTE->PCR[BUTTON_ANTIPINCH] = 0x00000110;


  //------------------PORTD
    //**************************************************
    PCC-> PCCn[PCC_PORTD_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT D */

    PTD->PDDR |= 1<<INDICATOR_UP;
    PORTD->PCR[INDICATOR_UP] =  0x00000100;
    PTD->PSOR |= 1<<INDICATOR_UP;

    PTD->PDDR |= 1<<INDICATOR_DOWN;
    PORTD->PCR[INDICATOR_DOWN] =  0x00000100;
    PTD->PSOR |= 1<<INDICATOR_DOWN;

    PTD->PDDR |= 1<<TASK_1MS;
    PORTD->PCR[TASK_1MS] =  0x00000100;
    PTD->PSOR |= 1<<TASK_1MS;

    PTD->PDDR |= 1<<TASK_2MS;
    PORTD->PCR[TASK_2MS] =  0x00000100;
    PTD->PSOR |= 1<<TASK_2MS;


  }



/* Notice: the file ends with a blank new line to avoid compiler warnings */


