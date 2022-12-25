#define _USE_MATH_DEFINES

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    unordered_map<int, long> factorials;
    int n = 1;
    factorials[0] = 1;
    for (int i = 1; i <= 9; i++) {
        n *= i;
        factorials[i] = n;
    }
    vector<int>num;
    for (int i = 0; i <= 9; i++) {
        num.push_back(i);
    }
    int goal = 1000000;
    string result = "";
    int f = 9;
    int cur = 0;
    while (f >= 0) {
        int a = goal / factorials[f];
        cout << a << endl;
        result += to_string(num[a]);
        num.erase(num.begin() + a);
        cur += a * factorials[f];
        goal -= a * factorials[f];
        cout << 1000000 - goal << endl;
        f--;
    }

    cout << result << endl;
}