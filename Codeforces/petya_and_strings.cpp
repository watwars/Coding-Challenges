#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int len = a.length();
    for (int i = 0; i < len; i++) {
        char c = a[i];
        char d = b[i];
        if (c >= 'a') {
            c -= 32;
        }
        if (d >= 'a') {
            d -= 32;
        }
        if (c < d) {
            cout << "-1" << endl;
            return 0;
        }

        if (c > d) {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
}
