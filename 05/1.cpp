#include <iostream>
#include <string>
using namespace std;

class Book {
private:
	string title;
	string author;

public:
	
	Book(string t, string a) : title(t), author(a) { 
		cout << "å �̸�: " << t << endl;
		cout << "å ����: " << a ;
	}

	string getAuthor() { return author; }
	string getTitle() { return title; }
	void setAuthor(string au) { author=au; }
	void setTitle(string ti) { title=ti; }
};
int main() {
	Book("Great C++", "Bob");
	
	return 0;
}