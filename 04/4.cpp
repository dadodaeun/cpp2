#include <iostream>
using namespace std;

class Book {
public:
	string title;
	string author;

};

int main() {
	Book b;

	b.title = "Gtrat C++";
	b.author = "Bob";

	cout << "å �̸�: " << b.title << endl;
	cout << "���� �̸�: " << b.author;

	return 0;
}