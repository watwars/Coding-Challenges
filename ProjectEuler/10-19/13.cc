#define _USE_MATH_DEFINES

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

string calculateResult(string a, string b) {
    string result = "";
    int aLength = a.length();
    int bLength = b.length();
    int carry = 0;
    int j = 0;
    for (int i = aLength - 1; i >= 0; i--) {
        int aDigit = a[i] - '0';
        int bDigit = bLength - 1 - j >= 0 ? b[bLength - 1 - j] - '0' : 0;
        j++;
        int sum = aDigit + bDigit + carry;
        if (sum >= 10) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }
        result = to_string(sum) + result;
    }
    if (carry == 1) {
        result = "1" + result;
    }
    return result;
}

int main() {
    string sum = "";
    for (int i = 0; i < 50; i++) {
        sum += "0";
    }

    string n;
    while (cin >> n) {
        sum = calculateResult(sum, n);
    }

    string result = "";
    for (int i = 0; i < 10; i++) {
        result += sum[i];
    }

    cout << result << endl;
}