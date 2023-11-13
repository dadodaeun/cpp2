#include <iostream>
#include <string>
using namespace std;
// 암호 조건. 대문자, 숫자, 소문자 모두 들어있어야함. 아니면 안전하지 않습니다 띄우기.
int main() {
	string pw;

	int a = 0;
	int A = 0;
	int num = 0;

	cout << "암호를 입력하시오: ";
	getline(cin, pw);

	for (int i = 0; i < pw.size(); i++) {
		if (pw[i] >= '0' && pw[i] <= '9') {		//
			num++;
		}
		if (pw[i] >= 'a' && pw[i] <= 'z') {
			a++;
		}
		if (pw[i] >= 'A' && pw[i] <= 'Z') {
			A++;
		}
	}
	if (num != 0 && a != 0 && A != 0) {
		cout << "안전합니다." << endl;
	}
	else {
		cout << "안전하지 않습니다." << endl;
	}

	return 0;
}