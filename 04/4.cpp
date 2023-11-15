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

	cout << "책 이름: " << b.title << endl;
	cout << "저자 이름: " << b.author;

	return 0;
}