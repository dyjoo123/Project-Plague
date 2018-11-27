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

	srand((unsigned)time(NULL));//main�Լ� �������� �Ʒ��� �ű�
	gotoxy(70, 0);
	for (int i = 0; i < 37; i++)//i�� ����â�� ���α���
	{
		if (i == 0)
			cout << "��-";

		cout << "-";
		if (i == 36)
			cout << "-��";
	}
	for (int k = 1; k < 30; k++) //k�� ����â�� �� ���α���
	{

		if (k == 7 || k == 20 || k == 9 || k == 11)
		{
			gotoxy(70, k);

			int j;
			for (j = 0; j < 41; j++)
				if (j == 0)
					cout << "��";
				else if (j == 40)
					cout << "��";
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
	for (int i = 0; i < 37; i++)//i�� ����â�� ���α���
	{
		if (i == 0)
			cout << "��-";

		cout << "-";
		if (i == 36)
			cout << "-��";
	}
	gotoxy(71, 8);
	cout << "��⵵  |";
	gotoxy(81, 8);
	cout << "������  |";
	gotoxy(91, 8);
	cout << "��û�ϵ�|";
	gotoxy(101, 8);
	cout << "��û����";
	gotoxy(71, 10);
	cout << "���ϵ�|";
	gotoxy(81, 10);
	cout << "��󳲵�|";
	gotoxy(91, 10);
	cout << "����ϵ�|";
	gotoxy(101, 10);
	cout << "���󳲵�";

	gotoxy(71, 3);
	int a = 0;
	a = rand() % 10 + 1;

	if (a == 1)
	{
		cout << "���������ϴ�. �α����� �����߽��ϴ�.";

	}
	else if (a == 2)
	{
		cout << "���ο� ���̷����� �߻�������";
		gotoxy(71, 4);
		cout << "�� ����Ǿ����ϴ�"; //k�� ����ڰ� ���� ���̷��� �̸�
		gotoxy(71, 5);
		cout << "���̷��� ��ȭ!!";

	}
	else if (a == 3)
	{
		cout << "��������� ������ ���������";

	}
	else if (a == 4)
	{
		cout << "�����Ұ� �����Ǿ����ϴ�,ȸ��������";

	}
	else if (a == 5)
	{
		cout << "����� ���ϴ�, ����� ����";

	}
	else if (a == 6)
	{
		cout << "�̱��������ķ� �ѱ��̹�����,";
		gotoxy(71, 4);
		cout << " �α��� ����";

	}
	else if (a == 7)
	{
		cout << "������ ����,ȸ��������";

	}
	else if (a == 8)
	{
		cout << "��̴���Ȯ��, ���� ����";

	}
	else if (a == 9)
	{
		cout << "�߱����� �̼���������, ";
		gotoxy(71, 4);
		cout << "���̷�����ȭ";

	}

	gotoxy(0, 150);
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
void maps()
{

	srand((unsigned)time(NULL));//main�Լ� �������� �Ʒ��� �ű�
	gotoxy(60, 0);
	for (int i = 0; i < 37; i++)//i�� ����â�� ���α���
	{
		if (i == 0)
			cout << "��-";

		cout << "-";
		if (i == 36)
			cout << "-��";
	}
	for (int k = 1; k < 30; k++) //k�� ����â�� �� ���α���
	{

		if (k == 7 || k == 20 || k == 9 || k == 11)
		{
			gotoxy(60, k);

			int j;
			for (j = 0; j < 41; j++)
				if (j == 0)
					cout << "��";
				else if (j == 40)
					cout << "��";
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
	for (int i = 0; i < 37; i++)//i�� ����â�� ���α���
	{
		if (i == 0)
			cout << "��-";

		cout << "-";
		if (i == 36)
			cout << "-��";
	}
	gotoxy(61, 8);
	cout << "��⵵  |";
	gotoxy(71, 8);
	cout << "������  |";
	gotoxy(81, 8);
	cout << "��û�ϵ�|";
	gotoxy(91, 8);
	cout << "��û����";
	gotoxy(61, 10);
	cout << "���ϵ�|";
	gotoxy(71, 10);
	cout << "��󳲵�|";
	gotoxy(81, 10);
	cout << "����ϵ�|";
	gotoxy(91, 10);
	cout << "���󳲵�";

	gotoxy(61, 3);
	int a = 0;
	a = rand() % 10 + 1;

	if (a == 1)
	{
		cout << "���������ϴ�. �α����� �����߽��ϴ�.";

	}
	else if (a == 2)
	{
		cout << "���ο� ���̷����� �߻�������";
		gotoxy(61, 4);
		cout << "�� ����Ǿ����ϴ�"; //k�� ����ڰ� ���� ���̷��� �̸�
		gotoxy(61, 5);
		cout << "���̷��� ��ȭ!!";

	}
	else if (a == 3)
	{
		cout << "��������� ������ ���������";

	}
	else if (a == 4)
	{
		cout << "�����Ұ� �����Ǿ����ϴ�,ȸ��������";

	}
	else if (a == 5)
	{
		cout << "����� ���ϴ�, ����� ����";

	}
	else if (a == 6)
	{
		cout << "�̱��������ķ� �ѱ��̹�����,";
		gotoxy(61, 4);
		cout << " �α��� ����";

	}
	else if (a == 7)
	{
		cout << "������ ����,ȸ��������";

	}
	else if (a == 8)
	{
		cout << "��̴���Ȯ��, ���� ����";

	}
	else if (a == 9)
	{
		cout << "�߱����� �̼���������, ";
		gotoxy(61, 4);
		cout << "���̷�����ȭ";

	}

}