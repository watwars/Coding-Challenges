#define _USE_MATH_DEFINES

#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int mi, ma = 0;

    if (n <= 2) {
        cout << "0 " << n << endl;
        return 0;
    }

    ma += 2;
    int rest = n - 2;
    int weeks = rest / 7;
    ma += weeks * 2;
    rest = rest - weeks * 7;
    if (rest > 5) {
        ma += 7 - rest;
    }


    weeks = n / 7;
    mi += weeks * 2;

    n -= weeks * 7;
    if (n > 5) {
        mi += 7 - n;
    }

    cout << mi << " " << ma << endl;
}
