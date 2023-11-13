#include <iostream>
using namespace std;

// 입력 받은 세 정수 중 가장 큰 수 찾기.

int maximum(int x, int y, int z);

int main() {
	int x = 0;
	int y = 0;
	int z = 0;
	int max = 0;

	cin >> x >> y >> z ;
	max = maximum(x, y, z);

	cout << "가장 큰 정수는 " << max << endl;

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
