#include <iostream>
using namespace std;

class Person {
	string name;
	int age;

public:
	void setPerson(string n, int a) { name = n; age = a; }
	void print() {
		cout << "ÀÌ¸§: " << name << endl;
		cout << "³ªÀÌ: " << age;
	}
};
int main() {
	Person obj;

	obj.setPerson("±èÃ¶¼ö", 21);
	obj.print();
	return 0;
}