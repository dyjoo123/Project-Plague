#include "virusSpread.h"
#include <Windows.h>
#include <process.h>
#include <iostream>

using namespace std;

int main()
{
	RATE SEOUL(42, 18, 41, 98, 21, 3);
	Virus evola(100000, 1000, 0, 0, SEOUL);
	int i = 0;
	while(1)
	{

		system("cls");
		cout << "* 바이러스가 감염된지 " << i + 1 << "번째 달" << endl;
		evola.printCurrentSituation();
		evola.changeValue();
		if (evola.getNumSesceptible() <= 0)
			break;;
		Sleep(1000);
		i++;
			
	}
	system("cls");
	cout << "* 총 " << i + 1 << "달 만에 도시가 멸망했습니다!" << endl;

	return 0;
}