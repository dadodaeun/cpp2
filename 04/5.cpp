#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Dice {

public:
	int roll() {
		int face = 0;

		face = (int)(rand() % 6 + 1);
		return face;
	}
};

int main() {
	Dice d1, d2;
	srand(time(NULL));

	cout << "�ֻ��� ��=" << d1.roll() << endl;
	cout << "�ֻ��� ��=" << d2.roll() << endl;

	return 0;
}