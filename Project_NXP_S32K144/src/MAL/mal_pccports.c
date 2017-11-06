/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: mal_pccports.c $
 * $Revision: version #6 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    MAL file to initialize and configure all pcc ports.

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
/*    Author         |      Version    |       Description                    */
/*----------------------------------------------------------------------------*/
/* Olvera Jorge      |         5       | APP file to control the port's clock */
/* Archundia Luis    |         5       | APP file to control the interrupts   */
/* Luis Archundia    |         6       | File name modified to comply with    */
/*		     |	               | naming convention standards.         */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: mal_pccports.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/

#include "MAL/mal_pccports.h"


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



void pccports_void_config_PCC_PORT(T_UWORD configPCC){
	PCC-> PCCn[configPCC] = PCC_PCCn_CGC_MASK;
}

/* Notice: the file ends with a blank new line to avoid compiler warnings */
