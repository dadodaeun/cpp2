#include <iostream>
using namespace std;

// ���� ���������� ���� ���� ���ϱ�

inline double calc_volume(int radius);
int main() {
	double radius = 0;

	cout << "�������� �Է��Ͻÿ�: ";
	cin >> radius;

	cout << "���� ���Ǵ� " << calc_volume(radius) << endl;
	return 0;
}

inline double calc_volume(int radius = 10.0) {
	return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}