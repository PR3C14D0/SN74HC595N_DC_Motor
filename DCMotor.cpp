#include "DCMotor.h"

DCMotor::DCMotor(int nSRCLK, int nRCLK, int nSER) {
    this->nRCLK = nRCLK;
    this->nSRCLK = nSRCLK;
    this->nSER = nSER;
    
    return;
}