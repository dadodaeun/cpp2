#include <iostream> 
using namespace std;

// �� ���� ���ڿ��� �Է¹ް� ������ �ٸ��� Ȯ���ϱ�.

int main() {
	string str1 = "";
	string str2 = "";

	cout << "ù ��° ���ڿ� : ";
	cin >> str1;

	cout << "�� ��° ���ڿ� : ";
	cin >> str2;

	if (str1 == str2) {
		cout << "�� ���� ���ڿ��� �����ϴ�.";
	}
	else
	{
		cout << "�� ���� ���ڿ��� �ٸ��ϴ�.";
	}
}