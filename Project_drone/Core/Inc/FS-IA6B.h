/*
 * FS-IA6B.h
 *
 *  Created on: Dec 22, 2024
 *      Author: hyn02
 */

#ifndef INC_FS_IA6B_H_
#define INC_FS_IA6B_H_

#include "main.h"

typedef struct _FSiA6B_iBus
{
	unsigned short RH; //Right Horizontal
	unsigned short RV; //Right Vertical
	unsigned short LV; //Left Vertical
	unsigned short LH; //Left Horizontal
	unsigned short SwA;
	unsigned short SwB;
	unsigned short SwC;
	unsigned short SwD;
	unsigned short VrA;
	unsigned short VrB;

	unsigned char FailSafe;
}FSiA6B_iBus;

extern FSiA6B_iBus iBus;

unsigned char iBus_Check_CHKSUM(unsigned char* data, unsigned char len);
void iBus_Parsing(unsigned char* data, FSiA6B_iBus* iBus);
void FSiA6B_UART5_Initialization(void);
unsigned char iBus_isActiveFailsafe(FSiA6B_iBus* iBus);

#endif /* INC_FS_IA6B_H_ */
