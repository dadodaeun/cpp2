#include <iostream> 
using namespace std;
// ������ ������ �� �յ޸��� Ƚ��.100��

bool flip(int num);

int main() {
	int dice = 0;
	int top = 0;
	int bottom = 0;

	srand(time(NULL));
	
	for (int i = 0; i < 100; i++) {
		if (flip(dice) == false) {
			bottom++;
		}
		else {
			top++;
		}
	}

	cout << "������ �ո�: " << top << endl;
	cout << "������ �޸�: " << bottom << endl;

}
bool flip(int num) {
	num = ((int)rand() % 2);

	if (num == 0) {
		return false;
	}
	else {
		return true;
	}
}