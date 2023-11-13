#include <iostream> 
using namespace std;

// 1^2 + 2^2 ... + n^2 의 값 출력하기

int main() {
	int num = 0;
	int sum = 0;

	cout << "n의 값을 입력하시오. : ";
	cin >> num;

	for (int i = 1; i <= num; i++) {
		sum = sum + (i * i);
	}

	cout << "게산 값은 " << sum << "입니다.";
	return 0;
}