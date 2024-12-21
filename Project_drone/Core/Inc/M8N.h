/*
 * M8N.h
 *
 *  Created on: Dec 21, 2024
 *      Author: hyn02
 */

#ifndef INC_M8N_H_
#define INC_M8N_H_

#include "main.h"

typedef struct _M8N_UBX_NAV_POSLLH
{
	unsigned char CLASS;
	unsigned char ID;
	unsigned short LENGTH;

	unsigned int iTOW;
	signed int lon;
	signed int lat;
	signed int height;
	signed int hMSL;
	unsigned int hAcc;
	unsigned int vAcc;

	double lon_f64;
	double lat_f64;
}M8N_UBX_NAV_POSLLH;

extern M8N_UBX_NAV_POSLLH posllh;

void M8N_TransmitData(unsigned char* data, unsigned char len);
void M8N_Initialization(void);
void N8M_UART4_Initialization(void);

unsigned char M8N_UBX_CHKSUM(unsigned char* data, unsigned char len);
void M8N_UBX_POSLLH_Parsing(unsigned char* data, M8N_UBX_NAV_POSLLH* posllh);

#endif /* INC_M8N_H_ */
