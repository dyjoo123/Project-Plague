#include "Tile.h"
using namespace std;
	void CTile::Set_Total_Population(int Population)
	{
		Total_Population = Population;
	} 
	void CTile::Set_Infected_Population(int Population)
	{
		Infected_Population = Population;
	}
	void CTile::Set_Survival_Population(int Population)
	{
		Survival_Population = Population;
	}
	void CTile::Set_Tile_Feature(int Feature)
	{
		Tile_Feature = Feature;
	}
	void CTile::Set_Infection_Status(int Status)
	{
		Infection_Status = Status;
	}
	void CTile::Set_TileCheck(int a)
	{
		TileCheck = a-48;  // char int ��ȯ�ϴ��� 48���� char 0 -> int 0 
	}

	//Get
	int CTile::Get_Total_Population()
	{
		return Total_Population;
	}
	int CTile::Get_Infected_Population()
	{
		return Infected_Population;
	}
	int CTile::Get_Survival_Population()
	{
		return Survival_Population;
	}

	int CTile::Get_Tile_Feature()
	{
		// 1
		return Tile_Feature;
	}            // ���ڶ� ���� Ư¡ �����ؼ� ����ؾ���(�����ʿ�)

	void CTile::Get_Infection_Status()
	{
		int InfectedRate;
		InfectedRate = (Infected_Population * 100) / Total_Population;

		if (InfectedRate == 100)
			SetColor(0, 12);
		else if (InfectedRate >= 75)
			SetColor(0, 4);
		else if (InfectedRate >= 50)
			SetColor(0, 14);
		else if (InfectedRate >= 25)
			SetColor(0, 6);

	}			 // ���ڶ� ���� ���� ���̶� �����ؼ� ����ؾ���(�����ʿ�)

	int CTile::Get_TileCheck()
	{
		return TileCheck;
	}
	void PRINT()
	{
		//ȭ�鿡 �� ��ȭ�� �ʿ��� �� ���� �ٽ� ����ϴ� �Լ�.

		
	}


	void gotoxy(int x, int y)
	{
		COORD Pos;
		Pos.X = x;
		Pos.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	}

	void SetColor(int bcolor, int tcolor) //bcolor�� ��� ��, tcolor�� �ؽ�Ʈ ��
	{
		HANDLE hcon;

		hcon = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hcon, (bcolor << 4) | tcolor);
	}