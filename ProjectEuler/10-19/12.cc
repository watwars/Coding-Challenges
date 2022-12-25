#include <cmath>
#include <iostream>

using namespace std;

const int DIVISOR_GOAL = 500;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i == n / i) {
                count += 1;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

int main() {
    int t = 1;
    int c = 2;
    while (true) {
        int divisorCount = countDivisors(t);
        if (divisorCount > DIVISOR_GOAL) {
            cout << t << endl;
            return 0;
        }
        t += c;
        c += 1;
    }
}
