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


int countVowel(string s) {
    int v = 0;
    int l = s.length();
    for (int i = 0; i < l; i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            v++;
        }
    }
    return v;
}

int main() {
    string a, b, c;

    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    if (countVowel(a) == 5 && countVowel(b) == 7 && countVowel(c) == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
