#include "rateCompose.h"

RATE::RATE(int B, int D, int M, int C, int L, int R) : BIRTHRATE(B), DEATHRATE(D), MORBIDITY(M), CONTACTRATE(C), LATENTRATE(L), RECOVERYRATE(R)
{

}

RATE::RATE() : BIRTHRATE(0), DEATHRATE(0), MORBIDITY(0), CONTACTRATE(0), LATENTRATE(0), RECOVERYRATE(0)
{

}

double RATE::getBIRTHRATE()
{
	return BIRTHRATE;
}

double RATE::getDEATHRATE()
{
	return DEATHRATE;
}

double RATE::getMORBIDITY()
{
	return MORBIDITY;
}

double RATE::getCONTACTRATE()
{
	return CONTACTRATE;
}

double RATE::getLATENTRATE()
{
	return LATENTRATE;
}

double RATE::getRECOVERYRATE()
{
	return RECOVERYRATE;
}