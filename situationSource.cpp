#include<iostream>
#include <windows.h>
#include <situation.h>
using namespace std;
int Situation::identify() {
	xy read;//�ᰡ �ִ��� Ȯ�ο�, ,
	int a=0;//a�� x��y�������� ��������Ÿ�ϰ����� ������ ����, �� ������ ���� ������ ǥ�� (0<=a<=2500)
	
	for (int y = 0; y < 50; y++)//�� ��ǥ�� ���Ǵ� ������ ��üũ�⸸ŭ(50�� y�������� ĭ��, ���氡��) 
	{
		for (int x = 0; x < 50; x++) 
		{
			
			if ( read.get(x,y)== ��)
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
void   Situation::implement( Situation a);
gotoxy(70, line);//���� �����ʿ� ���¸� �����ֱ����� x�� 70���� ����
if (a.identify() == 0)
{
	cout << "�����ڰ� ��� �׾����ϴ�";
	line++;
}
else if (a.identify() == 1)
{
	cout << "���� �����ڰ� 0~10�ۼ�Ʈ�Դϴ�";
	line++;
}
else if (a.identify() == 2)
{
	cout << "���� �����ڰ� 10~20�ۼ�Ʈ�Դϴ�";
	line++;
}
else if (a.identify() == 3)
{
	cout << "���� �����ڰ� 20~30�ۼ�Ʈ�Դϴ�";
	line++;
}
else if (a.identify() == 4)
{
	cout << "���� �����ڰ� 3~40�ۼ�Ʈ�Դϴ�";
	line++;
}
else if (a.identify() == 5)
{
	cout << "���� �����ڰ� 40~50�ۼ�Ʈ�Դϴ�";
	line++;
}
else if (a.identify() == 6)
{
	cout << "���� �����ڰ� 50~60�ۼ�Ʈ�Դϴ�";
	line++;
}
else if (a.identify() == 7)
{
	cout << "���� �����ڰ� 60~70�ۼ�Ʈ�Դϴ�";
	line++;
}
else if (a.identify() == 8)
{
	cout << "���� �����ڰ� 70~80�ۼ�Ʈ�Դϴ�";
	line++;
}
else if (a.identify() == 9)
{
	cout << "���� �����ڰ� 80~90�ۼ�Ʈ�Դϴ�";
	line++;
}
else if (a.identify() == 10)
{
	cout << "���� �����ڰ� 90~100�ۼ�Ʈ�Դϴ�";
	line++;
}
else  (a.identify() == 666)
{
	cout << "������ �츮�� �����ߴ� ";
	line++;
}

gotoxy(int x, int y)

{

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}