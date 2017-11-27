/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Cfg.c $
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
 * $Log: SchM_Cfg.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/
#include "SchM.h"
#include "SchM_Tasks.h"



/* Defines */
/*============================================================================*/



/* Constants and types */
/*============================================================================*/

const SchM_TaskConfigType TaskDescriptor[]=
{
		{
				SCHM_TASKID_1MS,
				SCHM_MASK_1MS,
				SCHM_OFFSET_1MS,
				SchM_1MS_Task
		},
		{
				SCHM_TASKID_2MS,
				SCHM_MASK_2MS,
				SCHM_OFFSET_2MS,
				SchM_2MS_Task
		}			

};

const SchM_ConfigType SchedulerConfig =
{
		sizeof(TaskDescriptor)/sizeof(SchM_TaskConfigType),
		&TaskDescriptor[0]
};


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
 

/* Notice: the file ends with a blank new line to avoid compiler warnings */

