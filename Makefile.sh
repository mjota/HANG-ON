#!/bin/bash
sdcc -c LCD.c
sdcc -c main.c
sdcc main.rel LCD.rel
shopt -s extglob
mv ~/NOKIADISP/!(*.ihx|*.sh|*.h|*.c|Rest) ~/NOKIADISP/Rest
cp ~/NOKIADISP/main.ihx /media/KINGSTON/Compilat
