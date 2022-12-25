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
    int k;
    cin >> n >> k;

    int f;
    int t;
    
    int res = INT32_MIN;

    for (int i = 0; i < n; i++) {
        cin >> f >> t;
        int curr = 0;
        if (t > k) {
            curr = f - t + k;
        } else {
            curr = f;
        }
        res = max(res, curr);
    }

    cout << res << endl;
}
