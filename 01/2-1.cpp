#include <iostream>
using namespace std;

// �Է� ���� �� ���� �� ���� ū �� ã��.

int maximum(int x, int y, int z);

int main() {
	int x = 0;
	int y = 0;
	int z = 0;
	int max = 0;

	cin >> x >> y >> z ;
	max = maximum(x, y, z);

	cout << "���� ū ������ " << max << endl;

	return 0;
}
int maximum(int x, int y, int z) {
	if (x >= y) {
		if (z >= x) {
			return z;
		}
		else 
			return x;
	}
	else if (x < y) {
		if (z >= y) {
			return z;
		}
		else 
			return y;
	}
	
}