#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// 1, 2, 3 (����, ����, ��) �ϳ� ���ڸ� ��� ��ǻ�� 123 �߿� �ϳ�. ��ư �׷���

int main() {
	int num = 0;
	int com_num = 0;

	srand(time(NULL));
	com_num = (rand() % 2 + 1);

	
	cout << "����, ����, �� �߿� �ϳ��� �����Ͻÿ�. (1, 2, 3): ";
	cin >> num;		// ����� ����������
	cout << "��ǻ��: " << com_num << endl;

	if (num == 1) {
		if (com_num == 1) {
			cout << "���º��Դϴ�.";
		}
		else if (com_num == 2) {
			cout << "��ǻ�� �¸�..";
		}
		else if (com_num == 3) {
			cout << "����� �¸�!";
		}
	}
	else if (num == 2) {
		if (com_num == 2) {
			cout << "���º��Դϴ�.";
		}
		else if (com_num == 3) {
			cout << "��ǻ�� �¸�..";
		}
		else if (com_num == 1) {
			cout << "����� �¸�!";
		}
	}
	else if (num == 3) {
		if (com_num == 3) {
			cout << "���º��Դϴ�.";
		}
		else if (com_num == 1) {
			cout << "��ǻ�� �¸�..";
		}
		else if (com_num == 2) {
			cout << "����� �¸�!";
		}
	}

}