#include <iostream>
#include <Windows.h>   // 맨 아래 gotoxy 
using namespace std;

class CTile
{
private:
	int Totla_Population; // 타일 총 인구
	int Infected_Population; // 타일 감염인구
	int Dead_Population; // 타일 사망인구
	int Survival_Population; // 타일 생존인구
	int Tile_Feature;  // 타일 특징
	int Infection_Status; // 감염 상태 10%~100% 기준 1~10으로 나타내서 색깔별 구분

	double BIRTHRATE;       // 출생률
	double DEATHRATE;       // 사망률
	double MORBIDITY;       // 치사률
	double ContactRate;     // 접촉률
	double LatentRate;      // 잠복률
	double RecoveryRate;     // 회복률

public:
	void Set_Totla_Population(int Population);   // Set 
	void Set_Infected_Population(int Population);
	void Set_Dead_Population(int Population);
	void Set_Survival_Population(int Population);
	void Set_Tile_Feature(int Feature);
	void Set_Infection_Status(int Status);

	void Set_BIRTHRATE(double RATE);
	void Set_DEATHRATE(double RATE);
	void Set_MORBIDITY(double RATE);
	void Set_ContactRate(double RATE);
	void Set_LatentRate(double RATE);
	void Set_RecoveryRate(double RATE);

	int Get_Totla_Population();   // Get 
	int Get_Infected_Population();
	int Get_Dead_Population();
	int Get_Survival_Population();
	int Get_Tile_Feature();
	int Get_Infection_Status();

	double Get_BIRTHRATE();
	double Get_DEATHRATE();
	double Get_MORBIDITY();
	double Get_ContactRate();
	double Get_LatentRate();
	double Get_RecoveryRate();
	

};

class Area
{
private:
	int  Area_Total_Population;  // 지역 총 인구
	char Area_Feature; // 지역 별 특징
public:
	CTile * Tile;   // 타일배열 처음주소값. private에 두면 직접접근이 안되서 CTile의 public 함수에 접근할 수 없음(변수가 public에 있어서 불편)
	Area(int a);  //생성자 a개만큼의 타일배열을 생성
	~Area();      //delete [] Tile 필요
};

void gotoxy(int x, int y);