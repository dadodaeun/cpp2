#include <iostream>
using namespace std;

// 다른 두 변이 주어졌을 때 직각삼각형의 빗변을 계산.

int main() {
	double a = 0;
	double b = 0;

	cout << "직각삼각형의 한 변: ";
	cin >> a ;

	cout << "직각삼각형의 한 변: ";
	cin >> b;

	cout << "빗변: " << hypot(a, b);

	return 0;
}
double hypot(double a, double b) {
	
	double c = 0;
	c = a*a + b*b;

	return sqrt(c);
}
