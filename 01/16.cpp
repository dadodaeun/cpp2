#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// 50�޷��� ������ ������ �ϴ� ����� �־�. �� ���� ���ڿ� 1�޷��� �Ǵٰ� �����϶�.
// ���� ���� 0.5 ������ 0.5�̴�. ���� �� �Ұų� 250�޷��� �����ϸ� ������ �����Ѵ�.

int main() {
				
	int goal_money = 250;	// ��ǥ �ݾ��� $250
	int bets = 0;		// ���� Ƚ��
	double average = 0;	// ���� ��� Ƚ�� (��� ���Ӵ� ���� Ƚ��/1000)
	int win = 0;		// �̱� Ƚ��
	
	srand(time(NULL));

	for (int i = 0; i < 1000; i++) {
		int money = 50;			// �ʱ� �ݾ��� $50

		while (money != 0 && money != 250) {

			bets++;

			if ((float)((unsigned)rand() % 100) < 50)	money++;
			else	money--;
			
			if (money == 0) {
				break;
			}
			else if (money == 250) {
				win++;
				break;
			}
			else continue;
		}
		
		average = average + bets;
		bets = 0;

		// cout << bets << " " << win << " " << lose << " " << money << endl;
	}
	
	cout << "�ʱ�ݾ�: $50" << endl;
	cout << "��ǥ�ݾ�: $" << goal_money << endl;
	cout << "1000�� ���� " << win << "�� �¸�" << endl;
	cout << "�̱� Ȯ�� = " << (float)win / 10 << endl;
	cout << "��� ���� Ƚ�� = " << (float)(average / 1000) << endl;
 
	return 0;
}