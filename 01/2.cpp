#include <iostream>
using namespace std;
 // �ݶ�, ��, ���̴�. �ֽ�, Ŀ�� �� �ϳ�. 1~5 �Է�. �� �ܴ� ���� ���.

int main() {
	int num = 0;

	cout << "�ݶ�, ��, ���̴�, �ֽ�, Ŀ�� �� �ϳ��� �����ϼ���. : ";
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "�ݶ� �����Ͽ����ϴ�.";
		break;

	case 2:
		cout << "���� �����Ͽ����ϴ�.";
		break;

	case 3:
		cout << "���̴ٸ� �����Ͽ����ϴ�.";
		break;

	case 4:
		cout << "�ֽ��� �����Ͽ����ϴ�.";
		break;

	case 5:
		cout << "Ŀ�Ǹ� �����Ͽ����ϴ�.";
		break;

	default:
		cout << "����. ������ ��ȿ���� �ʽ��ϴ�. ���� ��ȯ�մϴ�.";
		break;
	}

}