#include <iostream>
using namespace std;

// 1���� 100���� 3�� ��� ����ϱ�

int main() {
	int num = 0;

	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			cout << i << " " ;
		}
	}
}
