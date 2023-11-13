#include <iostream> 
using namespace std;

// 사용자에게 5를 입력하라고 5번 반복.

int main() {
	int num = 0;

	for (int i = 0; i < 5; i++) {
		cout << "정수 하나를 입력하세요. : ";
		cin >> num;

		if (num == 5) {
			cout << "5를 입력하셨군요! 컴퓨터 승";
			break;
		}
		else
		{
			if (i == 4) {
				cout << "인내심이 강하네요! 사용자 승";

			}
			continue;
		}
	}

}
