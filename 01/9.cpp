#include <iostream>
using namespace std;

int main() {
	float fah = 0;	// ȭ��
	float cel = 0;	// ����

	for (int i = 0; i <= 10; i++) {
		fah = i * 10;
		cel = (fah - 32.0) * 5.0 / 9.0;
	
		cout << fah << "   " << cel << endl;
	}

	return 0;
}
