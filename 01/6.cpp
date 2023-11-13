#include <iostream> 
using namespace std;

int main() {

	for (int i = 2; i < 8; i++) {
		for (int j = 1; j < i; j++) {
			cout << j;
		}
		for (int j = 0; j < 7 - i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}