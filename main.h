/*****************************************************

        Plug n Play Library for Nokia 3310 LCD

        Author:  Ajay Bhargav
		Email :  contact@rickeyworld.info
		WWW   :  www.8051projects.net

		File  :  LCD.H

*****************************************************/

#include "lcd.h"
#include <stdlib.h>

#define BUT_ES P1_5
#define BUT_DR P1_6
#define BUT_AC P1_7
#define AC_ES P3_0
#define AC_DR P3_1
#define LED P3_3
#define BUZ P3_2

void inittimer();
void intro();
void initgame();
unsigned int numrandom();
void movobs();
void changecar();
void main();
