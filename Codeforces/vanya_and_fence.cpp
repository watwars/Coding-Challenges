#include <iostream>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int result = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        result += a > h ? 2 : 1;
    }

    cout << result << endl;
}
