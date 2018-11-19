#pragma once

/* 모든 비율들은 1년을 기준으로 1000명당 몇 명이 해당되는 지를 나타냄
   예를 들어 출생률이 42인 것은 1년동안 1000명당 42명이 새로 태어남을 뜻함 */

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
	double BIRTHRATE; // 출생률
	double DEATHRATE; // 사망률
	double MORBIDITY; // 치사율
	double CONTACTRATE; // 접촉률
	double LATENTRATE; // 잠복률
	double RECOVERYRATE; // 회복률
};

