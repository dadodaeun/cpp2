#include <iostream>
using namespace std;

void sayHello(int n);
int main() {
	int num;

	cout << "n�� ���� �Է��Ͻÿ� : ";
	cin >> num;
	sayHello(num);

	return 0;
}

void sayHello(int n=1) {

	cout << "sayHello()->";

	for (int i = 0; i < n; i++) {
		cout << "Hello ";
	}
}