#include <iostream>
#include <string>
using namespace std;
// ��ȣ ����. �빮��, ����, �ҹ��� ��� ����־����. �ƴϸ� �������� �ʽ��ϴ� ����.
int main() {
	string pw;

	int a = 0;
	int A = 0;
	int num = 0;

	cout << "��ȣ�� �Է��Ͻÿ�: ";
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
		cout << "�����մϴ�." << endl;
	}
	else {
		cout << "�������� �ʽ��ϴ�." << endl;
	}

	return 0;
}