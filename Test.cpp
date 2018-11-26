#include <process.h>
#include "Tile.h"
#include<iostream>
#include<fstream>
ifstream readFile("map.txt");
using namespace std;

void PrintMap();
void GetMap();

CTile Tile[44][72];

int main()
{
	GetMap();

	for (int i = 0; i < 44; i++)  //세로길이
	{
		for (int j = 0; j < 72; j++)  // 가로길이
		{
			if (Tile[i][j].Get_TileCheck() == 1)   // 타일이면
			{
				cout << "■";
				j++;
			}
			else                                  // 타일이 아니면
				cout << " ";                      // 공백을 출력
		}
		cout << endl;
	}

	return 0;
}


void PrintMap()
{
	for (int i = 0; i < 44; i++)  //세로길이
	{
		for (int j = 0; j < 72; j++)  // 가로길이
		{
			if (Tile[i][j].Get_TileCheck() == 1)   // 타일이면
			{
				cout << "■";
				j++;
			}
			else                                  // 타일이 아니면
				cout << " ";                      // 공백을 출력
		}
		cout << endl;
	}
}

void ChangeColor()
{
	for (int i = 0; i < 44; i++)  //세로길이
	{
		for (int j = 0; j < 72; j++)  // 가로길이
		{
			if (Tile[i][j].Get_TileCheck() == 1)   // 타일이면
			{
				if (Tile[i][j].Get_Infection_Status())   // 감염율이 25% 이상이면 색을 바꿈.
				{
					cout << "■";
					SetColor(0, 0);
					j++;
				}
			}
		}
		cout << endl;
	}
}

void GetMap()
{
	for (int i = 0; i < 44; i++)  //세로길이
	{
		for (int j = 0; j < 72; j++)  // 가로길이
		{
			char n;
			readFile >> n;
			Tile[i][j].Set_TileCheck(int(n));
		}
	}   // 인우한테 받은 맵크기 고려 다차원배열 선언
}