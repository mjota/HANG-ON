/*****************************************************

 HANG ON - A little Game for a 8051 & Nokia 3310 LCD
 Copyright (c) 2012 - Manuel Joaquin Díaz Pol

 This program is free software: you can redistribute it and/or modify it under
 the terms of the GNU General Public License as published by the Free Software
 Foundation, either version 3 of the License, or (at your option) any later
 version.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 details.

 You should have received a copy of the GNU General Public License along with
 this program.  If not, see <http://www.gnu.org/licenses/>.

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
void changetime();
void it_timer0(void) interrupt 1;
void intro();
void initgame();
unsigned int numrandom(unsigned int max);
void movobs();
void changecar();
void gameover();
void main();
