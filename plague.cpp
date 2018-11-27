#include <iostream>
#include <fstream>
#include "rateCompose.h"
#include "Tile.h"
#include "virusSpread.h"
#include"time.h"
#include"cstdlib"
ifstream readFile("map.txt");
using namespace std;
void PrintMap();
void GetMap();
void maps();

CTile Tile[44][72];

int main()
{
	gotoxy(0, 0);
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

	srand((unsigned)time(NULL));//main함수 변수선언 아래에 옮김
	gotoxy(70, 0);
	for (int i = 0; i < 37; i++)//i는 상태창의 가로길이
	{
		if (i == 0)
			cout << "┌-";

		cout << "-";
		if (i == 36)
			cout << "-┐";
	}
	for (int k = 1; k < 30; k++) //k는 상태창의 총 세로길이
	{

		if (k == 7 || k == 20 || k == 9 || k == 11)
		{
			gotoxy(70, k);

			int j;
			for (j = 0; j < 41; j++)
				if (j == 0)
					cout << "├";
				else if (j == 40)
					cout << "┤";
				else cout << "-";
		}
		else {
			gotoxy(70, k);
			cout << "|";
			gotoxy(111, k);
			cout << "|";
		}
	}
	gotoxy(70, 30);
	for (int i = 0; i < 37; i++)//i는 상태창의 가로길이
	{
		if (i == 0)
			cout << "└-";

		cout << "-";
		if (i == 36)
			cout << "-┘";
	}
	gotoxy(71, 8);
	cout << "경기도  |";
	gotoxy(81, 8);
	cout << "강원도  |";
	gotoxy(91, 8);
	cout << "충청북도|";
	gotoxy(101, 8);
	cout << "충청남도";
	gotoxy(71, 10);
	cout << "경상북도|";
	gotoxy(81, 10);
	cout << "경상남도|";
	gotoxy(91, 10);
	cout << "전라북도|";
	gotoxy(101, 10);
	cout << "전라남도";

	gotoxy(71, 3);
	int a = 0;
	a = rand() % 10 + 1;

	if (a == 1)
	{
		cout << "지진났습니다. 인구수가 감소했습니다.";

	}
	else if (a == 2)
	{
		cout << "새로운 바이러스가 발생됬지만";
		gotoxy(71, 4);
		cout << "에 흡수되었습니다"; //k는 사용자가 붙일 바이러스 이름
		gotoxy(71, 5);
		cout << "바이러스 강화!!";

	}
	else if (a == 3)
	{
		cout << "유흥업소의 증가로 출생률증가";

	}
	else if (a == 4)
	{
		cout << "연구소가 감염되었습니다,회복률감소";

	}
	else if (a == 5)
	{
		cout << "에이즈가 돕니다, 사망률 증가";

	}
	else if (a == 6)
	{
		cout << "미국경제폭파로 한국이민증가,";
		gotoxy(71, 4);
		cout << " 인구수 증가";

	}
	else if (a == 7)
	{
		cout << "영국의 지원,회복률증가";

	}
	else if (a == 8)
	{
		cout << "페미니즘확대, 출산률 감소";

	}
	else if (a == 9)
	{
		cout << "중국에서 미세먼지유입, ";
		gotoxy(71, 4);
		cout << "바이러스강화";

	}

	gotoxy(0, 150);
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
void maps()
{

	srand((unsigned)time(NULL));//main함수 변수선언 아래에 옮김
	gotoxy(60, 0);
	for (int i = 0; i < 37; i++)//i는 상태창의 가로길이
	{
		if (i == 0)
			cout << "┌-";

		cout << "-";
		if (i == 36)
			cout << "-┐";
	}
	for (int k = 1; k < 30; k++) //k는 상태창의 총 세로길이
	{

		if (k == 7 || k == 20 || k == 9 || k == 11)
		{
			gotoxy(60, k);

			int j;
			for (j = 0; j < 41; j++)
				if (j == 0)
					cout << "├";
				else if (j == 40)
					cout << "┤";
				else cout << "-";
		}
		else {
			gotoxy(60, k);
			cout << "|";
			gotoxy(101, k);
			cout << "|";
		}
	}
	gotoxy(60, 30);
	for (int i = 0; i < 37; i++)//i는 상태창의 가로길이
	{
		if (i == 0)
			cout << "└-";

		cout << "-";
		if (i == 36)
			cout << "-┘";
	}
	gotoxy(61, 8);
	cout << "경기도  |";
	gotoxy(71, 8);
	cout << "강원도  |";
	gotoxy(81, 8);
	cout << "충청북도|";
	gotoxy(91, 8);
	cout << "충청남도";
	gotoxy(61, 10);
	cout << "경상북도|";
	gotoxy(71, 10);
	cout << "경상남도|";
	gotoxy(81, 10);
	cout << "전라북도|";
	gotoxy(91, 10);
	cout << "전라남도";

	gotoxy(61, 3);
	int a = 0;
	a = rand() % 10 + 1;

	if (a == 1)
	{
		cout << "지진났습니다. 인구수가 감소했습니다.";

	}
	else if (a == 2)
	{
		cout << "새로운 바이러스가 발생됬지만";
		gotoxy(61, 4);
		cout << "에 흡수되었습니다"; //k는 사용자가 붙일 바이러스 이름
		gotoxy(61, 5);
		cout << "바이러스 강화!!";

	}
	else if (a == 3)
	{
		cout << "유흥업소의 증가로 출생률증가";

	}
	else if (a == 4)
	{
		cout << "연구소가 감염되었습니다,회복률감소";

	}
	else if (a == 5)
	{
		cout << "에이즈가 돕니다, 사망률 증가";

	}
	else if (a == 6)
	{
		cout << "미국경제폭파로 한국이민증가,";
		gotoxy(61, 4);
		cout << " 인구수 증가";

	}
	else if (a == 7)
	{
		cout << "영국의 지원,회복률증가";

	}
	else if (a == 8)
	{
		cout << "페미니즘확대, 출산률 감소";

	}
	else if (a == 9)
	{
		cout << "중국에서 미세먼지유입, ";
		gotoxy(61, 4);
		cout << "바이러스강화";

	}

}