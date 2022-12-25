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

    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++) {
        char c; 
        cin >> c;
        if (c == '0') zero++;
        else one++;
    }

    cout << n - min(zero, one) * 2 << endl;
}
