#include <iostream>
#include <string>
using namespace std;

class Airplane {
private:
	string name;
	int capacity;
	int speed;
	int num;

public:
	void print();
	
	string getName() { return name; }
	int getCapacity() { return capacity; }
	int getSpeed() { return speed; }
	int getNum() { return num; }

	void setName(string na) { name = na; }
	void setCapacity(int capa) { capacity = capa; }
	void setSpeed(int sp) { speed = sp; }
	void setNum(int n) { num = n; }
};
void Airplane::print() {
	cout << "비행기 #" << num << endl;
	cout << "비행기의 이름: " << name << endl;
	cout << "비행기의 용량: " << capacity << endl;
	cout << "비행기의 속도: " << speed << " Km/h" << endl;
	cout << endl;
}

int main() {
	Airplane a1;
	Airplane a2;

	a1.setName("보잉 787");
	a1.setCapacity(900);
	a1.setSpeed(300);
	a1.setNum(1);
	a1.print();
	
	a2.setName("에어버스 350");
	a2.setCapacity(400);
	a2.setSpeed(1000);
	a2.setNum(2);
	a2.print();

	return 0;
}