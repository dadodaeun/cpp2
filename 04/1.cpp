#include <iostream>
using namespace std;

class Person {
	string name;
	int age;

public:
	void setPerson(string n, int a) { name = n; age = a; }
	void print() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age;
	}
};
int main() {
	Person obj;

	obj.setPerson("��ö��", 21);
	obj.print();
	return 0;
}