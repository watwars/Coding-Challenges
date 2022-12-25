#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 3;
    for (int i = 0; i < n; i++) {
        float a;
        cin >> a;
        float d = 360 / (180 - a);
        if (d == (int)d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
