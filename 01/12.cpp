#include <iostream> 
using namespace std;

// 100���� 369 ����

int main() {
	
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			cout << "�ڼ� ";
		}
		else
		{
			cout << i << " ";
		}
	}
	return 0;
}