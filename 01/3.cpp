#include <iostream> 
using namespace std;

// �迭 ��� ����

int main() {
	int days[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (int i = 0; i < 12; i++) {
		cout << i+1 << "���� " << days[i] << "�ϱ��� �ֽ��ϴ�." << endl;
	}

}