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

	for (int i = 0; i < 44; i++)  //���α���
	{
		for (int j = 0; j < 72; j++)  // ���α���
		{
			if (Tile[i][j].Get_TileCheck() == 1)   // Ÿ���̸�
			{
				cout << "��";
				j++;
			}
			else                                  // Ÿ���� �ƴϸ�
				cout << " ";                      // ������ ���
		}
		cout << endl;
	}

	return 0;
}


void PrintMap()
{
	for (int i = 0; i < 44; i++)  //���α���
	{
		for (int j = 0; j < 72; j++)  // ���α���
		{
			if (Tile[i][j].Get_TileCheck() == 1)   // Ÿ���̸�
			{
				cout << "��";
				j++;
			}
			else                                  // Ÿ���� �ƴϸ�
				cout << " ";                      // ������ ���
		}
		cout << endl;
	}
}

void ChangeColor()
{
	for (int i = 0; i < 44; i++)  //���α���
	{
		for (int j = 0; j < 72; j++)  // ���α���
		{
			if (Tile[i][j].Get_TileCheck() == 1)   // Ÿ���̸�
			{
				if (Tile[i][j].Get_Infection_Status())   // �������� 25% �̻��̸� ���� �ٲ�.
				{
					cout << "��";
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
	for (int i = 0; i < 44; i++)  //���α���
	{
		for (int j = 0; j < 72; j++)  // ���α���
		{
			char n;
			readFile >> n;
			Tile[i][j].Set_TileCheck(int(n));
		}
	}   // �ο����� ���� ��ũ�� ��� �������迭 ����
}