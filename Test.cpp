#include "Tile.h"
#include <thread>
using namespace std;


int main()
{                       // ��Ʈ��� �ּҰ� �����������
	Area Seoul(15);     // �ּ� ������� : ����Area�� 15���� Ÿ���� �ִ�.
	                    // ���� Ÿ�� ������ Area.Tile[0~14]�� ����
	                    // �Լ��� Area.Tile[0~14].���ϴ��Լ� (Set���� ���� Get���� ǥ��)

	gotoxy(2,2);        //(x,y)�� �̵�

	Seoul.Tile[0].Set_Totla_Population(5);           
	cout << Seoul.Tile[0].Get_Totla_Population();  

	return 0;
}
