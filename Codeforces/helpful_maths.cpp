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
    string a, c;
    cin >> a;

    stringstream s(a);
    vector<int> t;
    while (getline(s, c, '+')) {
        t.push_back(stoi(c));
    }

    sort(t.begin(), t.end());
    for (unsigned int i = 0; i < t.size(); i++) {
        cout << t[i];
        cout << (i != t.size() - 1 ? "+" : "\n");
    }
}
