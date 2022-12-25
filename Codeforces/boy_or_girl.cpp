#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    string a;
    cin >> a;
    int n = a.length();
    unordered_set<char> s;

    for (int i = 0; i < n; i++) {
        s.insert(a[i]);
    }

    string result = s.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!";

    cout << result << endl;
}
