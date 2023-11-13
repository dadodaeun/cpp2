#include <iostream>
using namespace std;

// 구의 반지름으로 구의 부피 구하기

inline double calc_volume(int radius);
int main() {
	double radius = 0;

	cout << "반지름을 입력하시오: ";
	cin >> radius;

	cout << "구의 부피는 " << calc_volume(radius) << endl;
	return 0;
}

inline double calc_volume(int radius = 10.0) {
	return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}