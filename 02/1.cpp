#include <iostream> 
using namespace std;

// 두 개의 문자열을 입력받고 같은지 다른지 확인하기.

int main() {
	string str1 = "";
	string str2 = "";

	cout << "첫 번째 문자열 : ";
	cin >> str1;

	cout << "두 번째 문자열 : ";
	cin >> str2;

	if (str1 == str2) {
		cout << "두 개의 문자열이 같습니다.";
	}
	else
	{
		cout << "두 개의 문자열이 다릅니다.";
	}
}
