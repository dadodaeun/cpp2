#include <iostream>
using namespace std;
 // 콜라, 물, 사이다. 주스, 커피 중 하나. 1~5 입력. 그 외는 오류 출력.

int main() {
	int num = 0;

	cout << "콜라, 물, 사이다, 주스, 커피 중 하나를 선택하세요. : ";
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "콜라를 선택하였습니다.";
		break;

	case 2:
		cout << "물를 선택하였습니다.";
		break;

	case 3:
		cout << "사이다를 선택하였습니다.";
		break;

	case 4:
		cout << "주스를 선택하였습니다.";
		break;

	case 5:
		cout << "커피를 선택하였습니다.";
		break;

	default:
		cout << "오류. 선택이 우효하지 않습니다. 돈을 반환합니다.";
		break;
	}

}
