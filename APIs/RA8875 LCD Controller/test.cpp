#include <RA8875.h>
#include <wiringPiSPI.h>
#include <wiringPi.h>

#define __RPI__

void main(int argc, char const *argv[])
{
    RA8875::begin(RA8875_800x480 ,16);
    RA8875::_initialize();
    RA8875::clearMemory(false);
    RA8875::displayOn(boolean true);
    return 0;
}