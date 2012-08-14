#!/bin/bash
sdcc -c lcd.c
sdcc -c main.c
#sdcc -c helper.c
sdcc main.rel lcd.rel #helper.rel
shopt -s extglob
mv ~/Desarrollos/c/cow-little-game/!(*.md|*.ihx|*.sh|*.h|*.c|Rest) ~/Desarrollos/c/cow-little-game/Rest
cp ~/Desarrollos/c/cow-little-game/main.ihx /media/F73E-7305/Compilat
