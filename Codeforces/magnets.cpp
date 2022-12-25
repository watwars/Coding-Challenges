#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 0;
    int previous;
    cin >> previous;
    for (int i = 0; i < n - 1; i++) {
        int m;
        cin >> m;
        if (m / 10 != previous % 10) {
            continue;
        } else {
            result++;
        }
        previous = m;
    }
    cout << (result + 1) << endl;
}
