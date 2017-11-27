/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Tasks.h $
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
 * $Log: SchM_Tasks.h  $
  ============================================================================*/

#ifndef BSW_SERVICES_SCHM_SCHM_TASKS_H_
#define BSW_SERVICES_SCHM_SCHM_TASKS_H_

/* Includes */
/*============================================================================*/
#include "Std_Types.h"
#include "Dio.h"
#include "mef_windowlifter.h"


/* Defines */
/*============================================================================*/

#define NumberOfCycles (uint32_t)2700


#define TASK_1MS          1
#define TASK_2MS          3
#define TRANSITION_400MS  3





/* Constants and types */
/*============================================================================*/



/* Exported Variables */
/*============================================================================*/
T_UWORD ruw_CounterTime1ms;

/* Exported functions prototypes */
/*============================================================================*/

extern void SchM_1MS_Task  ( void );
extern void SchM_2MS_Task ( void );

#endif /* BSW_SERVICES_SCHM_SCHM_TASKS_H_ */
 

/* Notice: the file ends with a blank new line to avoid compiler warnings */

