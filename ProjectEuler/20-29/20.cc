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

string multiplication(string a, string b) {
    string result = "0";
    int aLength = a.length();
    int bLength = b.length();
    for (int i = bLength - 1; i >= 0; i--) {
        int bDigit = b[i] - '0';
        string partialProduct = "";
        int carry = 0;
        for (int j = aLength - 1; j >= 0; j--) {
            int aDigit = a[j] - '0';
            int product = aDigit * bDigit + carry;
            if (product >= 10) {
                carry = product / 10;
                product %= 10;
            } else {
                carry = 0;
            }
            partialProduct = to_string(product) + partialProduct;
        }
        if (carry > 0) {
            partialProduct = to_string(carry) + partialProduct;
        }
        for (int j = 0; j < bLength - 1 - i; j++) {
            partialProduct += "0";
        }
        result = addition(partialProduct, result);
    }
    return result;
}

int main(int argc, char **argv) {
    int num = stoi(argv[1]);
    string result = "1";
    for (int i = 2; i <= num; i++) {
        cout << i << endl;
        result = multiplication(result, to_string(i));
    }
    cout << result << endl;
    int sum = 0;
    for (int i = 0; i < result.length(); i++) {
        sum += result[i] - '0';
    }
    cout << sum << endl;
}