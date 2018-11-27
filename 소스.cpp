int Situation::identify() {
	xy read;//■가 있는지 확인용, ,
	int a = 0;//a는 x축y축으로의 감염정보타일갯수를 저장할 공간, 이 갯수에 따라서 감염울 표시 (0<=a<=2500)

	for (int y = 0; y < 50; y++)//각 좌표의 범의는 남한읜 전체크기만큼(50은 y축으로의 칸수, 변경가능) 
	{
		for (int x = 0; x < 50; x++)
		{

			if (read.get(x, y) == ■)
				a++;// 현재는 감염률이 몇퍼인지만 포함한것, 다른 것을 추가하려면 a=a+100; ,a=a+10000으로 비교하든지 다른 경우 사용
		}

	}
	if (a == 0)
		return 0;
	if else(0 <= a && a <= 250)
		return 1;
	else if (250 <= a && a <= 500)
		return 2;
	else if (500 <= a && a <= 750)
		return 3;
	else if (750 <= a && a <= 1000)
		return 4;
	else if (1000 <= a && a <= 1250)
		return 5;
	else if (1250 <= a && a <= 1500)
		return 6;
	else if (1500 <= a && a <= 1750)
		return 7;
	else if (1750 <= a && a <= 2000)
		return 8;
	else if (2000 <= a && a <= 2250)
		return 9;
	else if (2250 <= a && a <= 2500)
		return 10;
	else (a == 2500)
		return 666;

}