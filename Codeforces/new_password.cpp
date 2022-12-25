#define _USE_MATH_DEFINES

#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    string result = "";
    for (int i = 0; i < n; i++) {
        result += alphabet[i % k];
    }

    cout << result << endl;
}