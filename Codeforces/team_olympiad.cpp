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

    vector<int> a;
    vector<int> b;
    vector<int> c;

    int curr;
    for (int i = 1; i <= n; i++) {
        cin >> curr;
        switch (curr) {
            case 1:
                a.push_back(i);
                break;
            case 2:
                b.push_back(i);
                break;
            default:
                c.push_back(i);
                break;
        }
    }

    int l = min(a.size(), min(b.size(), c.size()));
    cout << l << endl;

    for (int i = 0; i < l; i++) {
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }
}
