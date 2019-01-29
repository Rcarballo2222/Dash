#define __RPI__
#include "RA8875.h"
//#include "RA8875.cpp"
#include <wiringPiSPI.h>
#include <wiringPi.h>

RA8875 d = RA8875(0, 13); 

int main(int argc, char const *argv[])
{
    d.begin(RA8875_800x480 ,16);
    d.clearMemory(false);
    d.displayOn(true);
    return 0;
}
