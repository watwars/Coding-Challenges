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
    int m, n;
    cin >> n >> m;

    int maxX = 0;
    int maxY = 0;
    int minX = n;
    int minY = m;
    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            if (c == '*') {
                maxX = max(maxX, i);
                maxY = max(maxY, j);
                minX = min(minX, i);
                minY = min(minY, j);
            }
            a[i][j] = c;
        }
    }

    for (int i = minX; i <= maxX; ++i) {
        for (int j = minY; j <= maxY; ++j) {
            cout << a[i][j];
        }
        cout << endl;
    }
}
