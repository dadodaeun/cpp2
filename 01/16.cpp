#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// 50달러를 가지고 도박을 하는 사람이 있어. 한 번의 도박에 1달러를 건다고 가정하라.
// 돈을 따고 0.5 잃을게 0.5이다. 돈을 다 잃거나 250달러에 도달하면 도박을 중지한다.

int main() {
				
	int goal_money = 250;	// 목표 금액은 $250
	int bets = 0;		// 배팅 횟수
	double average = 0;	// 배팅 평균 횟수 (모든 게임당 배팅 횟수/1000)
	int win = 0;		// 이긴 횟수
	
	srand(time(NULL));

	for (int i = 0; i < 1000; i++) {
		int money = 50;			// 초기 금액은 $50

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
	
	cout << "초기금액: $50" << endl;
	cout << "목표금액: $" << goal_money << endl;
	cout << "1000번 중의 " << win << "번 승리" << endl;
	cout << "이긴 확률 = " << (float)win / 10 << endl;
	cout << "평균 배팅 횟수 = " << (float)(average / 1000) << endl;
 
	return 0;
}