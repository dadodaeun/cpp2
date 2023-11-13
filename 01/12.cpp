#include <iostream> 
using namespace std;

// 100까지 369 게임

int main() {
	
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			cout << "박수 ";
		}
		else
		{
			cout << i << " ";
		}
	}
	return 0;
}