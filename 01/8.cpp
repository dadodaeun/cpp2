#include <iostream> 
using namespace std;

// ����ڰ� �Է��� ������ ��� ����� ����ϱ�

int main() {
	int num = 0;

	cout << "������ �Է��Ͻÿ�. : ";
	cin >> num;

	for (int i = num; i >= 1; i--) {
		if (num % i == 0) {
			cout << (num / i) << " ";
		}

	}
}