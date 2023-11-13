#include <iostream> 
using namespace std;

// 계산기 프로그램. 연산의 종류, 숫자 입력, 게산 결과

int main() {
	char exp = '0';
	int num[2] = { 0 };

	cout << "연산의 종류 : ";
	cin >> exp;

	cout << "숫자를 입력하시오. : ";
	for (int i = 0; i < 2; i++) {
		cin >> num[i];
	}

	cout << "게산의 결과 : ";
	
	switch (exp)
	{
	case '+' :
		
		cout << num[0] + num[1];
		break;

	case '-':
		cout << num[0] - num[1];
		break;

	case '/':
		cout << num[0] / num[1];
		break;
	
	case '*':
		cout << num[0] * num[1];
		break;

	default:
		break;
	};
		

	return 0;
}
