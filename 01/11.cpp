#include <iostream> 
using namespace std;

// 1^2 + 2^2 ... + n^2 �� �� ����ϱ�

int main() {
	int num = 0;
	int sum = 0;

	cout << "n�� ���� �Է��Ͻÿ�. : ";
	cin >> num;

	for (int i = 1; i <= num; i++) {
		sum = sum + (i * i);
	}

	cout << "�Ի� ���� " << sum << "�Դϴ�.";
	return 0;
}