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

    vector<int> cookies;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        total += a;
        cookies.push_back(a);
    }

    int ans = 0;
    for (auto i : cookies) {
        if ((total - i) % 2 == 0) {
            ans += 1;
        }
    }

    cout << ans << endl;
}
