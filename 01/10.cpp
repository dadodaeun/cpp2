#include <iostream>
using namespace std;

// �� ���� ������ �ִ�� 100. a^2 + b^2 = C^2 �� �����ϴ� ������ ����.

int main() {
	int a = 0;
	int	b = 0;
	int c = 0;

	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			for (int k = 1; k <= 200; k++) {
				if ((i * i) + (j * j) == (k * k)) {
					cout << i << " " << j << " " << k << " " << endl;
				}
			}
		}
	}
	return 0;
}