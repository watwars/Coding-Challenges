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

    int cap = 0;
    int low = 0;
    for (int i = 0; i < n; i++) {
        char b = a[i];
        if (b >= 'a') {
            low++;
        } else {
            cap++;
        }
    }

    string result = "";

    for (int i = 0; i < n; i++) {
        if (cap > low) {
            if (a[i] >= 'a') {
                result += a[i] - 32;
            } else {
                result += a[i];
            }
        } else {
            if (a[i] < 'a') {
                result += a[i] + 32;
            } else {
                result += a[i];
            }
        }
    }

    cout << result << endl;
}
