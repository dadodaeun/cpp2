#include <iostream>
using namespace std;

// 1에서 100까지 3의 배수 출력하기

int main() {
	int num = 0;

	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			cout << i << " " ;
		}
	}
}
