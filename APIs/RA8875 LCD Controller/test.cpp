#define __RPI__
#include "RA8875.h"
#include "RA8875.cpp"
#include <wiringPiSPI.h>
#include <wiringPi.h>

using namespace RA8875;

void main(int argc, char const *argv[])
{
    begin(RA8875_800x480 ,16);
    _initialize();
    clearMemory(false);
    displayOn(boolean true);
    return 0;
}
