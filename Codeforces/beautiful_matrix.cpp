#include <iostream>

using namespace std;

int abs(int n) {
    if (n < 1) {
        return n * -1;
    }
    return n;
}

int main() {
    int n;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> n;
            if (n == 1) {
                cout << abs(2 - i) + abs(2 - j) << endl;
                return 0;
            }
        }
    }
}
