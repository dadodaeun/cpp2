#include <iostream>
#include <string>
using namespace std;

// ����ڷ� ���� ���ڿ����� �� ���ڰ� ��Ÿ���� �󵵸� ����ϴ� ���α׷�. a: 6

int main() {
	int counter[256] = { 0 };
	string s;	// apple
	cout << "���ڿ��� �Է��Ͻÿ�: ";

	getline(cin, s);	// �Է�

	
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