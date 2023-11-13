#include <iostream>
using namespace std;

// 입력받은 수를 모두 더하기. 0을 입력하면 입력을 멈춤

int main() {
	int arr[100] = { 0, };
	int num = 0;

	for (int i = 0; i < 100; i++) {
		cout << "정수를 입력하시오 : ";
		cin >> arr[i];

		if (arr[i] == 0) {
			break;
		}
		else {
			num = num + arr[i];
		}
	}
	cout << "합계 = " << num;
}