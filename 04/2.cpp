#include <iostream>
using namespace std;

class Computer {
	string name;
	int RAM;
	double cpu_speed;

public:
	void setComputer(string n, int r, double c) { name = n; RAM = r; cpu_speed = c; }
	void print() {
		cout << "�̸�: " << name << endl;
		cout << "RAM: " << RAM << endl;
		cout << "CPU �ӵ�: " << cpu_speed;
	}
};

int main() {
	Computer obj;

	obj.setComputer("���ǽ� ��ǻ��", 8, 4.2);
	obj.print();

	return 0;
}