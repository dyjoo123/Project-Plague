#pragma once

/* ��� �������� 1���� �������� 1000��� �� ���� �ش�Ǵ� ���� ��Ÿ��
   ���� ��� ������� 42�� ���� 1�⵿�� 1000��� 42���� ���� �¾�� ���� */

class RATE {
public:
	RATE();
	RATE(int B, int D, int M, int C, int L, int R);
	double getBIRTHRATE();
	double getDEATHRATE();
	double getMORBIDITY();
	double getCONTACTRATE();
	double getLATENTRATE();
	double getRECOVERYRATE();
private:
	double BIRTHRATE; // �����
	double DEATHRATE; // �����
	double MORBIDITY; // ġ����
	double CONTACTRATE; // ���˷�
	double LATENTRATE; // �ẹ��
	double RECOVERYRATE; // ȸ����
};

