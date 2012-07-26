#!/bin/bash
sdcc -c lcd.c
sdcc -c main.c
sdcc main.rel lcd.rel
shopt -s extglob
mv ~/cow-little-game/!(*.md|*.ihx|*.sh|*.h|*.c|Rest) ~/cow-little-game/Rest
cp ~/cow-little-game/main.ihx /media/CB0C-B87F/Compilat
