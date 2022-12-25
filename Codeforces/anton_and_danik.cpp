#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0;
    int d = 0;
    for (int i = 0; i < n; i++) {
        char w;
        cin >> w;
        if (w == 'A') {
            a++;
        } else {
            d++;
        }
    }
    if (a > d) {
        cout << "Anton" << endl;
    } else if (a < d) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}
