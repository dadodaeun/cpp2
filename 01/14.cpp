#include <iostream> 
using namespace std;

// ���� ���α׷�. ������ ����, ���� �Է�, �Ի� ���

int main() {
	char exp = '0';
	int num[2] = { 0 };

	cout << "������ ���� : ";
	cin >> exp;

	cout << "���ڸ� �Է��Ͻÿ�. : ";
	for (int i = 0; i < 2; i++) {
		cin >> num[i];
	}

	cout << "�Ի��� ��� : ";
	
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