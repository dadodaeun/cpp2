#include <iostream> 
using namespace std;

// 사용자가 입력한 정수의 모든 약수만 출력하기

int main() {
	int num = 0;

	cout << "정수를 입력하시오. : ";
	cin >> num;

	for (int i = num; i >= 1; i--) {
		if (num % i == 0) {
			cout << (num / i) << " ";
		}

	}
}
