#include<iostream>
#include <windows.h>
using namespace std;
class Situation {

private:
	
	static int line;//����âǥ�ø� ä��âó�� �Ʒ��� ������ ���� �뵵
public:
	int identify();//�������� �Լ�(������ ���� �������� ���ڷ� ��ȯ)
	void implement(Situation a);//��ȯ�� ������ ���¸� �Է�

};
int Situation::line = 0;

class xy {
private:
	char *Mark[100];
	
public:
	int get(int x,int y) { return Mark[x][y]; }//�ᰡ �ִ��� Ȯ�ο�
};

void gotoxy(int x, int y);