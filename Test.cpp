#include "Tile.h"
#include <thread>
using namespace std;


int main()
{                       // 도트찍고 주소값 지정방식참고
	Area Seoul(15);     // 주소 지정방식 : 서울Area에 15개의 타일이 있다.
	                    // 각각 타일 접근은 Area.Tile[0~14]로 접근
	                    // 함수는 Area.Tile[0~14].원하는함수 (Set으로 수정 Get으로 표시)

	gotoxy(2,2);        //(x,y)로 이동

	Seoul.Tile[0].Set_Totla_Population(5);           
	cout << Seoul.Tile[0].Get_Totla_Population();  

	return 0;
}
