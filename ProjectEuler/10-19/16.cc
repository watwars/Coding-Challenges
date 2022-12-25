#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

const int POWER = 1000;

string addition(string a, string b) {
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

int main(int argc, char **argv) {
    string result = "1";
    for (int i = 0; i < POWER; i++) {
        result = addition(result, result);
    }
    cout << result << endl;
    int sum = 0;
    for (int i = 0; i < result.length(); i++) {
        sum += result[i] - '0';
    }
    cout << sum << endl;
}