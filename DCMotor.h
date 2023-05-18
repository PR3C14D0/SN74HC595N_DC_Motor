#ifndef DCMotor_h
#define DCMotor_h
#include "Arduino.h"

class DCMotor {
private:
    int nSRCLK, nRCLK, nSER;
public:
    DCMotor(int nSRCLK, int nRCLK, int nSER);
};

#endif