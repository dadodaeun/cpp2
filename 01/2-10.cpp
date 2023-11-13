#include <iostream> 
using namespace std;
// 동전을 던졌을 때 앞뒷면의 횟수.100번

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

	cout << "동전의 앞면: " << top << endl;
	cout << "동전의 뒷면: " << bottom << endl;

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