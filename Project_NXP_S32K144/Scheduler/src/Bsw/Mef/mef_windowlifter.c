/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_buttonscontrol.c $
 * $Revision: version #1 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    Mef file to control the  buttons.

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
/*    Author         |      Version       |       Description                 */
/*----------------------------------------------------------------------------*/
/* Olvera Jorge      |           5        | APP file to control the buttons   */
/* Archundia Luis    |           5        | APP file to control the buttons   */
/* Luis Archundia    |           6        | File name modified to comply with */
/*		     |	                  | naming convention standards.      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: app_buttonscontrol.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "mef_windowlifter.h"


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

void windowlifter_void_MefWindowLifter(T_UWORD *lpuw_CounterTime1ms){

	static T_UBYTE rub_State = 0;

	switch(rub_State){

		/*****************************************************  WAIT FOR A PULSE    **************************************************/
		/*============================================================================================================================*/
		case WAIT_FOR_A_PULSE:
		/* Acciones del estado WAIT FOR A PULSE */
			ic_void_offIndicator_Up();
			ic_void_offIndicator_Down();

		/* Conditions */
			if((bc_T_UBYTE_statusButt_Up()==0) || (bc_T_UBYTE_statusButt_Down()==0)){ /* Condiciones para permanecer en  WAIT FOR A PULSE  */
				/* Acciones para permanecer en state WAIT FOR A PULSE */
				rub_State=WAIT_FOR_A_PULSE;
			}

			if(bc_T_UBYTE_statusButt_Up()||bc_T_UBYTE_statusButt_Down()){ /* Condiciones de la transicion  WAIT FOR A PULSE - VALIDATE A PULSE */
				/* Acciones de la transicion state WAIT FOR A PULSE - VALIDATE A PULSE */
				rub_State=VALIDATE_A_PULSE;
				*lpuw_CounterTime1ms=0;
			}

			break;
		/*============================================================================================================================*/

		/*****************************************************    VALIDATE A PULSE   **************************************************/
		/*============================================================================================================================*/
		case VALIDATE_A_PULSE:
			/* Acciones del estado VALIDATE A PULSE */
			ic_void_offIndicator_Up();
			ic_void_offIndicator_Down();

			/* Conditions */

			if(bc_T_UBYTE_statusButt_Up()||bc_T_UBYTE_statusButt_Down()||bc_T_UBYTE_statusButt_AntiP()){ /* Condiciones para permanecer en state VALIDATE A PULSE  */
				/* Acciones para permanecer en VALIDATE A PULSE */
				rub_State=VALIDATE_A_PULSE;
			}

			if((bc_T_UBYTE_statusButt_Up()==0)&&(bc_T_UBYTE_statusButt_Down()==0)&&(bc_T_UBYTE_statusButt_AntiP()==0)){ /* Condiciones de la transicion VALIDATE_A_PULSE - WAIT FOR A PULSE */
				/* Acciones de la transicion VALIDATE_A_PULSE - WAIT FOR A PULSE */
				rub_State=WAIT_FOR_A_PULSE;
			}


			if(((*lpuw_CounterTime1ms)>9)&&(bc_T_UBYTE_statusButt_Up())){ /* Condiciones de la transicion state VALIDATE A PULSE - CHOOSE TYPE WORK */
				/* Acciones de la transicion state VALIDATE A PULSE - CHOOSE TYPE WORK */
				rub_State=CHOOSE_TYPE_WORK;
				rs_Fg.bi1_flagUp=1;
			}

			if(((*lpuw_CounterTime1ms)>9)&&(bc_T_UBYTE_statusButt_Down())){ /* Condiciones de la transicion state VALIDATE A PULSE - CHOOSE TYPE WORK */
				/* Acciones de la transicion state VALIDATE A PULSE - CHOOSE TYPE WORK */
				rub_State=CHOOSE_TYPE_WORK;
				rs_Fg.bi1_flagDown=1;
			}

			if(((*lpuw_CounterTime1ms)>9)&&(bc_T_UBYTE_statusButt_AntiP())){ /* Condiciones de la transicion state VALIDATE A PULSE - ANTIPINCH WORK */
				/* Acciones de la transicion state VALIDATE A PULSE - ANTIPINCH WORK */
				rub_State=ANTIPINCH_WORK;
				rs_Fg.bi1_FlagAntipinch=1;
				*lpuw_CounterTime1ms=0;
			}



			break;
		/*============================================================================================================================*/


		/*****************************************************   CHOOSE TYPE WORK    **************************************************/
		/*============================================================================================================================*/
		case CHOOSE_TYPE_WORK:
			/* Acciones del estado CHOOSE TYPE WORK */
			if(rs_Fg.bi1_flagDown){ ic_void_onIndicator_Down();}
			if(rs_Fg.bi1_flagUp){ ic_void_onIndicator_Up();}

			/* Conditions */
			if(rs_Fg.bi1_flagUp){

				if(bc_T_UBYTE_statusButt_Up()&&((*lpuw_CounterTime1ms)>=_500ms)){ /* Condiciones de la transicion CHOOSE TYPE WORK - SEMIAUTOMATIC WORK */
					/* Acciones de la transicion CHOOSE TYPE WORK - SEMIAUTOMATIC WORK */
					rub_State=SEMIAUTOMATIC_WORK;
					rs_Fg.bi1_flagSemiautomaticUp=1;
					*lpuw_CounterTime1ms=0;
				}

				if((bc_T_UBYTE_statusButt_Up()==0)&&((*lpuw_CounterTime1ms)<_500ms)){ /* Condiciones de la transicion CHOOSE TYPE WORK - AUTOMATIC WORK */
					/* Acciones de la transicion CHOOSE TYPE WORK - AUTOMATIC WORK */
					rub_State=AUTOMATIC_WORK;
					rs_Fg.bi1_flagAutomaticUp=1;
					*lpuw_CounterTime1ms=0;
				}

			}

			if(rs_Fg.bi1_flagDown){

				if(bc_T_UBYTE_statusButt_Down()&&((*lpuw_CounterTime1ms)>=_500ms)){ /* Condiciones de la transicion CHOOSE TYPE WORK - SEMIAUTOMATIC WORK */
					/* Acciones de la transicion CHOOSE TYPE WORK - SEMIAUTOMATIC WORK */
					rub_State=SEMIAUTOMATIC_WORK;
					rs_Fg.bi1_flagSemiautomaticDown=1;
					*lpuw_CounterTime1ms=0;

				}

				if((bc_T_UBYTE_statusButt_Down()==0)&&((*lpuw_CounterTime1ms)<_500ms)){ /* Condiciones de la transicion CHOOSE TYPE WORK - AUTOMATIC WORK */
					/* Acciones de la transicion CHOOSE TYPE WORK - AUTOMATIC WORK */
					rub_State=AUTOMATIC_WORK;
					rs_Fg.bi1_flagAutomaticDown=1;
					*lpuw_CounterTime1ms=0;
				}

			}
			break;
		/*============================================================================================================================*/

		/*****************************************************    AUTOMATIC WORK  *****************************************************/
		/*============================================================================================================================*/
		case AUTOMATIC_WORK:
			/* Acciones del estado AUTOMATIC WORK */
			if(rs_Fg.bi1_flagAutomaticDown){
				wc_WindowDown(lpuw_CounterTime1ms);
			}

			if(rs_Fg.bi1_flagAutomaticUp){
				wc_WindowUp(lpuw_CounterTime1ms);
			}

			/* Conditions */

			if(rs_Fg.bi1_flagAutomaticUp&&rub_WindowLevel==10){ /* Condiciones de la transicion AUTOMATIC WORK - WAIT FOR A PULSE */
				/* Acciones de la transicion state 4 - 0 */
				rub_State=WAIT_FOR_A_PULSE;
				rs_Fg.bi1_flagAutomaticUp=0;
				rs_Fg.bi1_flagUp=0;
			}

			if(rs_Fg.bi1_flagAutomaticDown&&rub_WindowLevel==0){ /* Condiciones de la transicion AUTOMATIC WORK - WAIT FOR A PULSE */
				/* Acciones de la transicion state 4 - 0 */
				rub_State=WAIT_FOR_A_PULSE;
				rs_Fg.bi1_flagAutomaticDown=0;
				rs_Fg.bi1_flagDown=0;
			}

			if((bc_T_UBYTE_statusButt_Up())||(bc_T_UBYTE_statusButt_Down())){ /* Condiciones de la transicion AUTOMATIC WORK - VALIDATE A PULSE */
				/* Acciones de la transicion state 4 - 1 */
				rub_State=VALIDATE_A_PULSE;
				rs_Fg.bi1_flagAutomaticDown=0;
				rs_Fg.bi1_flagDown=0;
				rs_Fg.bi1_flagAutomaticUp=0;
				rs_Fg.bi1_flagUp=0;
				*lpuw_CounterTime1ms=0;
			}

			if((rs_Fg.bi1_flagUp)&&bc_T_UBYTE_statusButt_AntiP()){ /* Condiciones de la transicion AUTOMATIC WORK - VALIDATE A PULSE */
				/* Acciones de la transicion state 4 - 1 */
				rub_State=VALIDATE_A_PULSE;
				rs_Fg.bi1_flagAutomaticUp=0;
				rs_Fg.bi1_flagUp=0;
				*lpuw_CounterTime1ms=0;
			}




			break;
		/*============================================================================================================================*/


		/*****************************************************   SEMIAUTOMATIC WORK  **************************************************/
		/*============================================================================================================================*/
		case SEMIAUTOMATIC_WORK:
			/* Acciones de SEMIAUTOMATIC WORK */
			if(rs_Fg.bi1_flagSemiautomaticDown){

					if(bc_T_UBYTE_statusButt_Down()){
						wc_WindowDown(lpuw_CounterTime1ms);
						}
			}

			if(rs_Fg.bi1_flagSemiautomaticUp){
					if(bc_T_UBYTE_statusButt_Up()){
						wc_WindowUp(lpuw_CounterTime1ms);
					}

			}

			/* Conditions */

			if(rs_Fg.bi1_flagSemiautomaticUp&&rub_WindowLevel==10){ /* Condiciones de la transicion SEMIAUTOMATIC WORK - WAIT FOR A PULSE */
				/* Acciones de la transicion state 5 - 0 */
				rub_State=WAIT_FOR_A_PULSE;
				rs_Fg.bi1_flagSemiautomaticUp=0;
				rs_Fg.bi1_flagUp=0;
			}

			if(rs_Fg.bi1_flagSemiautomaticDown&&rub_WindowLevel==0){ /* Condiciones de la transicion SEMIAUTOMATIC WORK - WAIT FOR A PULSE */
				/* Acciones de la transicion state 5 - 0 */
				rub_State=WAIT_FOR_A_PULSE;
				rs_Fg.bi1_flagSemiautomaticDown=0;
				rs_Fg.bi1_flagDown=0;
			}

			if((bc_T_UBYTE_statusButt_Up()==0)&&(rs_Fg.bi1_flagSemiautomaticUp)){ /* Condiciones de la transicion SEMIAUTOMATIC WORK - WAIT FOR A PULSE */
				/* Acciones de la transicion state 5 - 0 */
				rub_State=WAIT_FOR_A_PULSE;
				rs_Fg.bi1_flagSemiautomaticUp=0;
				rs_Fg.bi1_flagUp=0;
			}

			if((bc_T_UBYTE_statusButt_Down()==0)&&(rs_Fg.bi1_flagSemiautomaticDown)){ /* Condiciones de la transicion SEMIAUTOMATIC WORK - WAIT FOR A PULSE */
				/* Acciones de la transicion state 5 - 0 */
				rub_State=WAIT_FOR_A_PULSE;
				rs_Fg.bi1_flagSemiautomaticDown=0;
				rs_Fg.bi1_flagDown=0;

			}

			if((rs_Fg.bi1_flagUp)&&bc_T_UBYTE_statusButt_AntiP()){ /* Condiciones de la transicion SEMIAUTOMATIC WORK - VALIDATE A PULSE */
				/* Acciones de la transicion state 5 - 1 */
				rub_State=VALIDATE_A_PULSE;
				rs_Fg.bi1_flagSemiautomaticUp=0;
				rs_Fg.bi1_flagUp=0;
				*lpuw_CounterTime1ms=0;
			}


			break;
		/*============================================================================================================================*/

		/*****************************************************    ANTIPINCH WORK   ****************************************************/
		/*============================================================================================================================*/
		case ANTIPINCH_WORK:
		     /* Acciones de ANTIPINCH WORK */
			if(rs_Fg.bi1_FlagAntipinch){
				wc_WindowDown(lpuw_CounterTime1ms);
			}

		     /* Conditions */
			if(rs_Fg.bi1_FlagAntipinch){ /* Condiciones para permanecer en ANTIPINCH WORK  */
				/* Acciones para permanecer ANTIPINCH WORK */
				rub_State=ANTIPINCH_WORK;
			}

			if((rs_Fg.bi1_FlagAntipinch)&&rub_WindowLevel==0){ /* Condiciones de la transicion ANTIPINCH WORK -  STOP 5 SECONDS */
				/* Acciones de la transicion ANTIPINCH WORK -  STOP 5 SECONDS */
				rub_State=STOP_5_SECONDS;
				rs_Fg.bi1_FlagAntipinch=0;
				rs_Fg.bi1_flagWaiting5Secons=1;
				*lpuw_CounterTime1ms=0;
			}


			break;
		/*============================================================================================================================*/


		/*****************************************************    STOP 5 SECONDS   ****************************************************/
		/*============================================================================================================================*/
		case STOP_5_SECONDS:
			    /* Acciones de STOP 5 SECONDS */


			     /* Conditions */
				if((rs_Fg.bi1_flagWaiting5Secons)&&(*lpuw_CounterTime1ms)<=_5000ms){ /* Condiciones para permanecer en STOP 5 SECONDS  */
					/* Acciones para permanecer en STOP 5 SECONDS */
					rub_State=STOP_5_SECONDS;
				}

				if((*lpuw_CounterTime1ms)>_5000ms){ /* Condiciones de la transicion state STOP 5 SECONDS - WAIT_FOR_A_PULSE */
					/* Acciones de la transicion STOP 5 SECONDS - 0 */
					rub_State=WAIT_FOR_A_PULSE;
					rs_Fg.bi1_flagWaiting5Secons=0;
				}


				break;
			/*============================================================================================================================*/






		/*****************************************************      D E F A U L T    **************************************************/
		/*============================================================================================================================*/
		default:
			break;
		/*============================================================================================================================*/


		}

}


 /* Notice: the file ends with a blank new line to avoid compiler warnings */
