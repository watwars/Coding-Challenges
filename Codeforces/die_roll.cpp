#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int main() {
    int a, b;
    cin >> a >> b;
    a = max(a, b);

    b = 6 - a + 1;
    if (b == 6) {
        cout << "1/1" << endl;
    } else if (b == 0) {
        cout << "0/1" << endl;
    } else {
        int c = gcd(b, 6);
        cout << b / c << "/" << 6 / c << endl;
    }
}
