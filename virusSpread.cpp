#pragma once
#include "virusSpread.h"
#include <iostream>

#define DECREASE -1
#define INCREASE 1
#define TOTALSECONDSOFTHEYEAR (365*24*60*60)
#define TOTALMONTHSOFTHEYEAR (12)

using namespace std;


Virus::Virus(int S, int E, int I, int R, RATE temp) : numSusceptible(S), numExposed(E), numInfectious(I), numRecovery(R), temp(temp)
{

}

Virus::Virus() : numSusceptible(1000000), numExposed(0), numInfectious(0), numRecovery(0)
{

}

int Virus::getNumSesceptible()
{
	return numSusceptible;
}

int Virus::getNumExposed()
{
	return numExposed;
}

int Virus::getNumInfectious()
{
	return numInfectious;
}

int Virus::getNumRecovery()
{
	return numRecovery;
}

int Virus::changeValue()
{
	int ratio1, ratio2, ratio3, ratio4; // ���� S�� ��ȭ��, E�� ��ȭ��, I�� ��ȭ��, R�� ��ȭ��

	ratio1 = ratioSusceptible();
	ratio2 = ratioExposed();
	ratio3 = ratioInfectious();
	ratio4 = ratioRecovery();

	numSusceptible += ratio1;
	numExposed += ratio2;
	numInfectious += ratio3;
	numRecovery += ratio4;

	return 1;
}

int Virus::ratioSusceptible()
{
	int ratioOfChange;
	ratioOfChange = (int)((INCREASE)* temp.getBIRTHRATE() / TOTALMONTHSOFTHEYEAR / 1000 * numSusceptible + (DECREASE)*temp.getDEATHRATE() / TOTALMONTHSOFTHEYEAR / 1000 * numSusceptible + (DECREASE)*temp.getCONTACTRATE() / TOTALMONTHSOFTHEYEAR / 1000 * numSusceptible*numInfectious);
	return ratioOfChange;
}

int Virus::ratioExposed()
{
	int ratioOfChange;
	ratioOfChange = (int)((INCREASE)*temp.getBIRTHRATE() / TOTALMONTHSOFTHEYEAR / 1000 * numSusceptible * numInfectious + (DECREASE)*temp.getBIRTHRATE() / TOTALMONTHSOFTHEYEAR / 1000 * numExposed + (DECREASE)*temp.getLATENTRATE() / TOTALMONTHSOFTHEYEAR / 1000 * numExposed);
	return ratioOfChange;
}

int Virus::ratioInfectious()
{
	int ratioOfChange;
	ratioOfChange = (int)((INCREASE)*temp.getBIRTHRATE() / TOTALMONTHSOFTHEYEAR / 1000 * numExposed + (DECREASE)*temp.getBIRTHRATE() / TOTALMONTHSOFTHEYEAR / 1000 * numInfectious + (DECREASE)*temp.getRECOVERYRATE() / TOTALMONTHSOFTHEYEAR / 1000 * numInfectious + (DECREASE)*temp.getMORBIDITY() / TOTALMONTHSOFTHEYEAR / 1000 * numInfectious);
	return ratioOfChange;
}

int Virus::ratioRecovery()
{
	int ratioOfChange;
	ratioOfChange = (int)((INCREASE)*temp.getRECOVERYRATE() / TOTALMONTHSOFTHEYEAR / 1000 * numInfectious + (DECREASE)*temp.getBIRTHRATE() / TOTALMONTHSOFTHEYEAR / 1000 * numRecovery);
	return ratioOfChange;
}

int Virus::printCurrentSituation()
{
	cout << "* ���� ��Ȳ" << endl << endl;
	cout << "* ������� : " << numSusceptible << endl;
	cout << "* ����ⱺ : " << numExposed << endl;
	cout << "* ������ : " << numInfectious << endl;
	cout << "* ȸ���� : " << numRecovery << endl;

	return 1;
}