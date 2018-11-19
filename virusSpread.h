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
	int changeValue(); // ��ü �� (S/E/I/R)�� ���� �ٲ�
	int ratioSusceptible(); // numSusceptible�� ��ȭ���� ���ϴ� �Լ�
	int ratioExposed(); // numExposed�� ��ȭ���� ���ϴ� �Լ�
	int ratioInfectious(); // numInfectious�� ��ȭ���� ���ϴ� �Լ�
	int ratioRecovery(); // numRecovery�� ��ȭ���� ���ϴ� �Լ�
	int printCurrentSituation(); // ���� ��Ȳ�� ȭ�鿡 ����ϴ� �Լ�
private:
	int numSusceptible; // �������(=�α�)
	int numExposed; // ����ⱺ
	int numInfectious; // ������
	int numRecovery; // ȸ����
	RATE temp; // �� ������ ������ �������� ��
};


#endif // !VIRUSSPREAD_H