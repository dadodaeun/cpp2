#include <iostream>
using namespace std;

// �ٸ� �� ���� �־����� �� �����ﰢ���� ������ ���.

int main() {
	double a = 0;
	double b = 0;

	cout << "�����ﰢ���� �� ��: ";
	cin >> a ;

	cout << "�����ﰢ���� �� ��: ";
	cin >> b;

	cout << "����: " << hypot(a, b);

	return 0;
}
double hypot(double a, double b) {
	
	double c = 0;
	c = a*a + b*b;

	return sqrt(c);
}