#include <iostream>
using namespace std;

bool prime(int num);

int main() {
    int prime_num[100] = { 0, };
    int j = 0;

    for (int i = 2; i < 100; i++) {
        if (prime(i)) {
            prime_num[j] = i;
            j++;
        }
    }

    for (int k = 0; k < j; k++) {
        cout << prime_num[k] << " ";
    }
    cout << endl;

    return 0;
}

bool prime(int num) {
    if (num < 2) {
        return false; 
    }

    for (int i = 2; i<= num-1; i++) {
        if (num % i == 0) {
            return false; 
        }
    }

    return true;
}
