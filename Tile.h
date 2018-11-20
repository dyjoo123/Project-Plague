#include <iostream>
#include <Windows.h>   // 맨 아래 gotoxy 
#include <fstream>
#include "virusSpread.h"
using namespace std;
ifstream readFile("map.txt");

CTile Tile[5][5];

void PrintMap()
{
	for (int i = 0; i < 5; i++)  //세로길이
	{
		for (int j = 0; j < 5; j++)  // 가로길이
		{
			if (Tile[i][j].Get_TileCheck() == 1)   // 타일이면
			{
				Tile[i][j].Get_Infection_Status();   // 감염도에따라 색을 바꾸고
				cout << "■";                        // 해당 색으로 타일을 찍고
				SetColor(0, 0);                      // 다시 색은 원상복귀
			}
			else                                  // 타일이 아니면
				cout << " ";                      // 공백을 출력
		}
		cout << endl;
	}
}

void GetMap()
{
	for (int i = 0; i < 5; i++)  //세로길이
	{
		for (int j = 0; j < 5; j++)  // 가로길이
		{
			char n;
			readFile >> n;
			Tile[i][j].Set_TileCheck(int(n));
		}
	}   // 인우한테 받은 맵크기 고려 다차원배열 선언
}

class CTile
{
private:
	int Total_Population; // 타일 총 인구
	int Infected_Population; // 타일 감염인구
	int Survival_Population; // 타일 생존인구
	int Tile_Feature;  // 타일 특징
	int Infection_Status; // 감염 상태 10%~100% 기준 1~10으로 나타내서 색깔별 구분
	int TileCheck;   // 48 이면 타일이 없는 ' ' 49 이면 타일

	static int Map_Total_Population;             // 맵 전체 인구수
	static int Map_Total_Infected_Population;    // 맵 전체 감염인구


public:
	void Set_Total_Population(int Population);   // Set 
	void Set_Infected_Population(int Population);
	void Set_Survival_Population(int Population);
	void Set_Tile_Feature(int Feature);
	void Set_Infection_Status(int Status);
	void Set_TileCheck(int a);

	CTile() :Total_Population(0), Infected_Population(0), Survival_Population(0), Tile_Feature(0), Infection_Status(0), TileCheck(0)
	{

	}


	int Get_Total_Population();   // Get 
	int Get_Infected_Population();
	int Get_Survival_Population();
	int Get_Tile_Feature();
	void Get_Infection_Status();
	int Get_TileCheck();

};

void gotoxy(int x, int y);

enum Color  //콘솔에서 사용하는 색상
{
	BLACK, BLUE, GREEN, CYAN,
	RED, MAGENTA, BROWN, LIGHTGRAY,
	DARKGRAY, LIGHTBLUE, LIGHTGREEN, LIGHTCYAN,
	LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE
};

void SetColor(int bcolor, int tcolor); //bcolor는 배경 색, tcolor는 텍스트 색

int CTile::Map_Total_Population = 0;
int CTile::Map_Total_Infected_Population = 0;