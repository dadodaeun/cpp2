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
		cout << "영화 #" << num << endl;
		cout << "영화 제목: " << title << endl;
		cout << "영화 감독: " << director << endl;
		cout << "영화 평점: " << rating << endl << endl;

	}
};
int main() {
	Movie m1("타이타닉", "제임스 카메론", 9.5, 1);
	m1.print();

	Movie m2("지오스톰", "딘 데블린", 8.34, 2);
	m2.print();
	return 0;
}