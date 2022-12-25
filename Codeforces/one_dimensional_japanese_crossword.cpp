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
    vector<int> count;

    int c = 0;

    for (int i = 0; i < n; i++) {
        char a;
        cin >> a;
        if (a == 'B') {
            c += 1;
        } else {
            if (c != 0) {
                count.push_back(c);
                c = 0;
            }
        }
    }
    if (c != 0) {
        count.push_back(c);
    }

    cout << count.size() << endl;
    if (count.size() != 0) {
        string output = "";
        for (unsigned int i = 0; i < count.size(); i++) {
            output += to_string(count[i]);
            if (i != count.size() - 1) {
                output += " ";
            }
        }
        cout << output << endl;
    }
}
