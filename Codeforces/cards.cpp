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

    unordered_map<int, vector<int>> indexes;
    vector<int> nums;

    int sum = 0;
    int c;

    for (int i = 0; i < n; i++) {
        cin >> c;
        sum += c;

        indexes[c].push_back(i + 1);
        nums.push_back(c);
    }

    int each = sum / (n / 2);

    unordered_set<int> seen;
    seen.insert(0);

    for (auto pair : nums) {
        int a = pair;
        int b = each - a;

        int idxA = indexes[a].size() > 0 ? indexes[a][indexes[a].size() - 1] : 0;
        if (seen.count(idxA)) continue;
        indexes[a].pop_back();

        int idxB = indexes[b].size() > 0 ? indexes[b][indexes[b].size() - 1] : 0;
        if (seen.count(idxB)) continue;
        indexes[b].pop_back();

        seen.insert(idxA);
        seen.insert(idxB);

        cout << to_string(idxA) << " " << to_string(idxB) << endl;
    }
}
