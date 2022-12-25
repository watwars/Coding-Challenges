#define _USE_MATH_DEFINES

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long int r, a, b;
        cin >> r >> a >> b;
        long double ans = 0;
        ans += r * r;
        while (r > 0) {
            r *= a;
            ans += r * r;
            r /= b;
            ans += r * r;
        }
        ans *= M_PI;
        cout << "Case #" << i + 1 << ": " << fixed << setprecision(6) << ans << endl;
    }
}