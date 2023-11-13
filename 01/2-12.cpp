#include <iostream>
#include <string>
using namespace std;

// 사용자로 받은 문자열에서 각 문자가 나타나는 빈도를 계산하는 프로그램. a: 6

int main() {
	int counter[256] = { 0 };
	string s;	// apple
	cout << "문자열을 입력하시오: ";

	getline(cin, s);	// 입력

	
	for (int i = 0; i < s.size(); i++) {
		counter[s[i]]++; 

	}
	
	for (int i = 0; i < 256; i++) {
		if (counter[i] != 0) {
			cout << (char)i << " : " << counter[i] << endl;
		}
	}
	return 0;
}