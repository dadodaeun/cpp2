#include <iostream>
using namespace std;

class Sum {
	int n1, n2;

public:
	void init(int x, int y) {
		n1 = x;
		n2 = y;
	}
	int add() {
		return n1 + n2;
	}
};

int main() {
	Sum obj;
	
	int x, y = 0;

	cout << "ù ��° ����: ";
	cin >> x;
	cout << "�� ��° ����: ";
	cin >> y;

	obj.init(x, y);
	cout << "���� ���: " << obj.add();
}