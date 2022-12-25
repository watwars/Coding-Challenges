#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int result = 0;
    while (true) {
        a *= 3;
        b *= 2;
        result++;
        if (a > b) {
            cout << result << endl;
            return 0;
        }
    }
}
