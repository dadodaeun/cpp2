#include <iostream>
using namespace std;

// �Է¹��� ���� ��� ���ϱ�. 0�� �Է��ϸ� �Է��� ����

int main() {
	int arr[100] = { 0, };
	int num = 0;

	for (int i = 0; i < 100; i++) {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> arr[i];

		if (arr[i] == 0) {
			break;
		}
		else {
			num = num + arr[i];
		}
	}
	cout << "�հ� = " << num;
}