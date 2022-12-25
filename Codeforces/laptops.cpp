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

    vector<pair<int, int>> laptops;

    pair<int, int> largest{0, 0};

    int p, q;
    for (int i = 0; i < n; i++) {
        cin >> p >> q;
        pair<int, int> curr{p, q};
        if (abs(p - q) > abs(largest.first - largest.second)) {
            largest = curr;
        }
        laptops.push_back(curr);
    }

    for (unsigned int i = 0; i < laptops.size(); i++) {
        int pd = laptops[i].first - largest.first;
        int qd = laptops[i].second - largest.second;
        if (pd < 0 && qd > 0 || pd > 0 && qd < 0) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;
}
