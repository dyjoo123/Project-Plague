#include <iostream>
#include <Windows.h>   // �� �Ʒ� gotoxy 
#include <fstream>
#include "virusSpread.h"
using namespace std;
ifstream readFile("map.txt");

CTile Tile[5][5];

void PrintMap()
{
	for (int i = 0; i < 5; i++)  //���α���
	{
		for (int j = 0; j < 5; j++)  // ���α���
		{
			if (Tile[i][j].Get_TileCheck() == 1)   // Ÿ���̸�
			{
				Tile[i][j].Get_Infection_Status();   // ������������ ���� �ٲٰ�
				cout << "��";                        // �ش� ������ Ÿ���� ���
				SetColor(0, 0);                      // �ٽ� ���� ���󺹱�
			}
			else                                  // Ÿ���� �ƴϸ�
				cout << " ";                      // ������ ���
		}
		cout << endl;
	}
}

void GetMap()
{
	for (int i = 0; i < 5; i++)  //���α���
	{
		for (int j = 0; j < 5; j++)  // ���α���
		{
			char n;
			readFile >> n;
			Tile[i][j].Set_TileCheck(int(n));
		}
	}   // �ο����� ���� ��ũ�� ��� �������迭 ����
}

class CTile
{
private:
	int Total_Population; // Ÿ�� �� �α�
	int Infected_Population; // Ÿ�� �����α�
	int Survival_Population; // Ÿ�� �����α�
	int Tile_Feature;  // Ÿ�� Ư¡
	int Infection_Status; // ���� ���� 10%~100% ���� 1~10���� ��Ÿ���� ���� ����
	int TileCheck;   // 48 �̸� Ÿ���� ���� ' ' 49 �̸� Ÿ��

	static int Map_Total_Population;             // �� ��ü �α���
	static int Map_Total_Infected_Population;    // �� ��ü �����α�


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

enum Color  //�ֿܼ��� ����ϴ� ����
{
	BLACK, BLUE, GREEN, CYAN,
	RED, MAGENTA, BROWN, LIGHTGRAY,
	DARKGRAY, LIGHTBLUE, LIGHTGREEN, LIGHTCYAN,
	LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE
};

void SetColor(int bcolor, int tcolor); //bcolor�� ��� ��, tcolor�� �ؽ�Ʈ ��

int CTile::Map_Total_Population = 0;
int CTile::Map_Total_Infected_Population = 0;