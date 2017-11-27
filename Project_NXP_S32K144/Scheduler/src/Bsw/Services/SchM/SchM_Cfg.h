/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Cfg.h $
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
 * $Log: SchM_Cfg.h  $
  ============================================================================*/
#ifndef BSW_SERVICES_SCHM_SCHM_CFG_H_
#define BSW_SERVICES_SCHM_SCHM_CFG_H_


/* Includes */
/*============================================================================*/
#include "Std_Types.h"



/* Defines */
/*============================================================================*/


/* Constants and types */
/*============================================================================*/
typedef enum{
	SCHM_MASK_1MS = (T_UBYTE) 0x01u,
	SCHM_MASK_2MS = (T_UBYTE) 0x03u
}SchM_TaskMaskType;

typedef enum{
	SCHM_TASKID_1MS,
	SCHM_TASKID_2MS
}SchM_TaskIDType;

typedef enum{
	SCHM_OFFSET_1MS   = (T_UBYTE) 0x00u,
	SCHM_OFFSET_2MS   = (T_UBYTE) 0x01u
} SchM_TaskOffsetType;

typedef struct{
	SchM_TaskIDType 	TaskID;
	SchM_TaskMaskType 	TaskMask;
	SchM_TaskOffsetType TaskOffset;
	tCallbackFunction TaskCallback;
}SchM_TaskConfigType;


typedef struct {
	uint8_t NumOfTasks;
	const SchM_TaskConfigType *TaskConfig;
}SchM_ConfigType;

const SchM_ConfigType SchedulerConfig;




/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

#endif /* BSW_SERVICES_SCHM_SCHM_CFG_H_ */

/* Notice: the file ends with a blank new line to avoid compiler warnings */
