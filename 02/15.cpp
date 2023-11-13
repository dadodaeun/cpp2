#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// 1, 2, 3 (가위, 바위, 보) 하나 숫자를 골라서 컴퓨터 123 중에 하나. 여튼 그런거

int main() {
	int num = 0;
	int com_num = 0;

	srand(time(NULL));
	com_num = (rand() % 2 + 1);

	
	cout << "가위, 바위, 보 중에 하나를 선택하시오. (1, 2, 3): ";
	cin >> num;		// 사용자 가위바위보
	cout << "컴퓨터: " << com_num << endl;

	if (num == 1) {
		if (com_num == 1) {
			cout << "무승부입니다.";
		}
		else if (com_num == 2) {
			cout << "컴퓨터 승리..";
		}
		else if (com_num == 3) {
			cout << "사용자 승리!";
		}
	}
	else if (num == 2) {
		if (com_num == 2) {
			cout << "무승부입니다.";
		}
		else if (com_num == 3) {
			cout << "컴퓨터 승리..";
		}
		else if (com_num == 1) {
			cout << "사용자 승리!";
		}
	}
	else if (num == 3) {
		if (com_num == 3) {
			cout << "무승부입니다.";
		}
		else if (com_num == 1) {
			cout << "컴퓨터 승리..";
		}
		else if (com_num == 2) {
			cout << "사용자 승리!";
		}
	}

}
