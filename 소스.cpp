int Situation::identify() {
	xy read;//�ᰡ �ִ��� Ȯ�ο�, ,
	int a = 0;//a�� x��y�������� ��������Ÿ�ϰ����� ������ ����, �� ������ ���� ������ ǥ�� (0<=a<=2500)

	for (int y = 0; y < 50; y++)//�� ��ǥ�� ���Ǵ� ������ ��üũ�⸸ŭ(50�� y�������� ĭ��, ���氡��) 
	{
		for (int x = 0; x < 50; x++)
		{

			if (read.get(x, y) == ��)
				a++;// ����� �������� ���������� �����Ѱ�, �ٸ� ���� �߰��Ϸ��� a=a+100; ,a=a+10000���� ���ϵ��� �ٸ� ��� ���
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