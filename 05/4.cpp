#include <iostream>
using namespace std;

class Movie {

	string title;
	string director;
	double rating;
	int num;

public:
	Movie(string t, string d, double r, int n) : title(t), director(d), rating(r), num(n) { }
	
	void setTitle(string t) { title = t; }
	void setDirector(string d) { director = d; }
	void setRating(double r) { rating = r; }
	void setNum(int n) { num = n; }

	void print() {
		cout << "��ȭ #" << num << endl;
		cout << "��ȭ ����: " << title << endl;
		cout << "��ȭ ����: " << director << endl;
		cout << "��ȭ ����: " << rating << endl << endl;

	}
};
int main() {
	Movie m1("Ÿ��Ÿ��", "���ӽ� ī�޷�", 9.5, 1);
	m1.print();

	Movie m2("��������", "�� ����", 8.34, 2);
	m2.print();
	return 0;
}