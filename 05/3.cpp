#include <iostream>
using namespace std;

class Box {
private:	
	int length;
	int width;
	int height;
public:

	Box() {}
	Box(int l, int w, int h) : length(l), width(w), height(h){}

	int getlength() { return length; }
	int getwidth() { return width; }
	int getheight() { return height; }

	void setlength(int l) { length = l; }
	void setwidth(int w) { width = w; }
	void setheigth(int h) { height = h; }

	int empty() {

	}
	int getVolum() {
		return length * width * height;
	}
	void print() {
		cout << "상자의 깊이: " << length << endl;
		cout << "상자의 너비: " << width << endl;
		cout << "상자의 높이: " << height << endl;
		cout << "상자의 부피: " << getVolum() << endl;
	}
};
int main() {
	Box b;

	b.setlength(3);
	b.setheigth(4);
	b.setwidth(5);
	b.print();

	
	return 0;
}