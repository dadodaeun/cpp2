#include <iostream> 
using namespace std;

// ����ڿ��� 5�� �Է��϶�� 5�� �ݺ�.

int main() {
	int num = 0;

	for (int i = 0; i < 5; i++) {
		cout << "���� �ϳ��� �Է��ϼ���. : ";
		cin >> num;

		if (num == 5) {
			cout << "5�� �Է��ϼ̱���! ��ǻ�� ��";
			break;
		}
		else
		{
			if (i == 4) {
				cout << "�γ����� ���ϳ׿�! ����� ��";

			}
			continue;
		}
	}

}