#!/bin/bash
sdcc -c lcd.c
sdcc -c main.c
#sdcc -c helper.c
sdcc main.rel lcd.rel #helper.rel
shopt -s extglob
mv ~/cow-little-game/!(*.md|*.ihx|*.sh|*.h|*.c|Rest) ~/cow-little-game/Rest
cp ~/cow-little-game/main.ihx /media/F73E-7305/Compilat
