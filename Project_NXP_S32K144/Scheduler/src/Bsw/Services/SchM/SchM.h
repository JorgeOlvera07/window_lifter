/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM.h  $
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
 * $Log: SchM.h  $
  ============================================================================*/
#ifndef BSW_SERVICES_SCHM_SCHM_H_
#define BSW_SERVICES_SCHM_SCHM_H_

/* Includes */
/*============================================================================*/
#include "Std_Types.h"
#include "SchM_Cfg.h"
#include "SchM_Types.h"


/* Defines */
/*============================================================================*/


/* Constants and types */
/*============================================================================*/

typedef struct{
    uint8_t FlagOverLoad: 1;    //Flag for indicating that an Overload have occured
    uint8_t FlagTaskState:1;    //Flag for indicating that there is a task in Ready/Running state
} Flags;


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/


extern void SchM_Init( const SchM_ConfigType *SchMConfig );
extern void SchM_Start( void );
extern void SchM_Stop( void );
void TurnOnOverloadPin(void);
void TurnOnBackgroundPin(void);
void TurnOffBackgroundPin(void);

#endif /* BSW_SERVICES_SCHM_SCHM_H_ */
 

/* Notice: the file ends with a blank new line to avoid compiler warnings */

