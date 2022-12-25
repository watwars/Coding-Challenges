#include <iostream>

using namespace std;

int main() {
    int n;
    int result = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        int count = 0;
        for (int j = 0; j < 3; j++) {
            cin >> a;
            count += a;
        }
        if (count >= 2) {
            result++;
        }
    }
    cout << result << endl;
}
