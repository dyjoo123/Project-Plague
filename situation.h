#include<iostream>
#include <windows.h>
using namespace std;
class Situation {

private:
	
	static int line;//상태창표시를 채팅창처럼 아래로 내리기 위한 용도
public:
	int identify();//개수세는 함수(개수에 따라서 감염율을 숫자로 반환)
	void implement(Situation a);//반환한 값으로 상태를 입력

};
int Situation::line = 0;

class xy {
private:
	char *Mark[100];
	
public:
	int get(int x,int y) { return Mark[x][y]; }//■가 있는지 확인용
};

void gotoxy(int x, int y);