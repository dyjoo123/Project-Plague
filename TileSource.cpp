#include "Tile.h"
using namespace std;

Area::Area(int a)        // 지역 생성자 a는 타일배열갯수
{
	Tile = new CTile[a];
}

Area::~Area()        // 소멸자 
{
	delete[] Tile;
}

	//Set
	void CTile::Set_Totla_Population(int Population)
	{
		Totla_Population = Population;
	} 
	void CTile::Set_Infected_Population(int Population)
	{
		Infected_Population = Population;
	}
	void CTile::Set_Dead_Population(int Population)
	{
		Dead_Population = Population;
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

	void CTile::Set_BIRTHRATE(double RATE)
	{
		BIRTHRATE = RATE;
	}
	void CTile::Set_DEATHRATE(double RATE)
	{
		DEATHRATE = RATE;
	}
	void CTile::Set_MORBIDITY(double RATE)
	{
		MORBIDITY = RATE;
	}
	void CTile::Set_ContactRate(double RATE)
	{
		ContactRate = RATE;
	}
	void CTile::Set_LatentRate(double RATE)
	{
		LatentRate = RATE;
	}
	void CTile::Set_RecoveryRate(double RATE)
	{
		RecoveryRate = RATE;
	}

	//Get
	int CTile::Get_Totla_Population()
	{
		return Totla_Population;
	}
	int CTile::Get_Infected_Population()
	{
		return Infected_Population;
	}
	int CTile::Get_Dead_Population()
	{
		return Dead_Population;
	}
	int CTile::Get_Survival_Population()
	{
		return Survival_Population;
	}

	int CTile::Get_Tile_Feature()
	{
		return Tile_Feature;
	}            // 숫자랑 각각 특징 대응해서 출력해야함(수정필요)

	int CTile::Get_Infection_Status()
	{
		return Infection_Status;
	}			 // 숫자랑 각각 상태 색이랑 대응해서 출력해야함(수정필요)

	double CTile::Get_BIRTHRATE()
	{
		return BIRTHRATE;
	}
	double CTile::Get_DEATHRATE()
	{
		return BIRTHRATE;
	}
	double CTile::Get_MORBIDITY()
	{
		return MORBIDITY;
	}
	double CTile::Get_ContactRate()
	{
		return ContactRate;
	}
	double CTile::Get_LatentRate()
	{
		return LatentRate;
	}
	double CTile::Get_RecoveryRate()
	{
		return RecoveryRate;
	}


	void gotoxy(int x, int y)
	{
		COORD Pos;
		Pos.X = x;
		Pos.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	}