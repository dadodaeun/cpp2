#include <iostream>
using namespace std;

class Computer {
	string name;
	int RAM;
	double cpu_speed;

public:
	void setComputer(string n, int r, double c) { name = n; RAM = r; cpu_speed = c; }
	void print() {
		cout << "이름: " << name << endl;
		cout << "RAM: " << RAM << endl;
		cout << "CPU 속도: " << cpu_speed;
	}
};

int main() {
	Computer obj;

	obj.setComputer("오피스 컴퓨터", 8, 4.2);
	obj.print();

	return 0;
}