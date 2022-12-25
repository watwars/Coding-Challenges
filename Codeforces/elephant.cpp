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

int getMoves(vector<int> &moves, int n) {
    if (n == 0) return 0;

    for (auto move : moves) {
        if (move <= n) {
            return 1 + getMoves(moves, n - move);
        }
    }

    return 1;
}

int main() {
    int n;
    cin >> n;

    vector<int> moves{5, 4, 3, 2, 1};

    cout << getMoves(moves, n) << endl;
}
