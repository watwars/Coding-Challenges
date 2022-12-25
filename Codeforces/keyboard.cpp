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
    char c;
    cin >> c;

    vector<vector<char>> keyboard = {
        {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
        {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'},
        {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'},
    };

    unordered_map<char, pair<int, int>> keyboard_map;
    for (int i = 0; i < keyboard.size(); ++i) {
        for (int j = 0; j < keyboard[i].size(); ++j) {
            keyboard_map[keyboard[i][j]] = {i, j};
        }
    }

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        auto pos = keyboard_map[s[i]];
        if (c == 'R') {
            s[i] = keyboard[pos.first][pos.second - 1];
        } else {
            s[i] = keyboard[pos.first][pos.second + 1];
        }
    }

    cout << s << endl;
}
