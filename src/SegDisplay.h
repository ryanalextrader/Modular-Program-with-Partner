#ifndef SEGDISPLAY_H
#define SEGDISPLAY_H

#include <mbed.h>
extern BusOut seg1;
extern BusOut seg2;
void SegInit(void);
int segConvert(char SegValue);

#endif