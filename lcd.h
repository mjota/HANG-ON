/*****************************************************

        Plug n Play Library for Nokia 3310 LCD

        Author:  Ajay Bhargav
		Email :  contact@rickeyworld.info
		WWW   :  www.8051projects.net

		File  :  LCD.H

*****************************************************/

#ifndef __NOKIA3310
#define __NOKIA3310
#include<8051.h>
//change the header file you need for your controller

#define SCK P1_3
#define DAT P1_4
#define DC P1_2
#define CE P1_1
#define RES P1_0

void spisend(unsigned char);
void wrdata(unsigned char);
void wrcmd(unsigned char);
void pixelxy(unsigned char, unsigned char);
void cursorxy(unsigned char, unsigned char);
void clearram(void);
void initlcd(void);
void putchar(unsigned char);
void putstr (unsigned char*);

#endif
