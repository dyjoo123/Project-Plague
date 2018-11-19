#pragma once
#include "rateCompose.h"
#ifndef VIRUSSPREAD_H
#define VIRUSSPREAD_H


class Virus {
public:
	Virus();
	Virus(int numSusceptible, int numExposed, int numInfectious, int numRecovery, RATE temp);
	int getNumSesceptible();
	int getNumExposed();
	int getNumInfectious();
	int getNumRecovery();
	int changeValue(); // 전체 군 (S/E/I/R)의 수를 바꿈
	int ratioSusceptible(); // numSusceptible의 변화율을 구하는 함수
	int ratioExposed(); // numExposed의 변화율을 구하는 함수
	int ratioInfectious(); // numInfectious의 변화율을 구하는 함수
	int ratioRecovery(); // numRecovery의 변화율을 구하는 함수
	int printCurrentSituation(); // 현재 상황을 화면에 출력하는 함수
private:
	int numSusceptible; // 감염대상군(=인구)
	int numExposed; // 잠재기군
	int numInfectious; // 감염군
	int numRecovery; // 회복군
	RATE temp; // 각 도시의 비율을 가져오는 곳
};


#endif // !VIRUSSPREAD_H