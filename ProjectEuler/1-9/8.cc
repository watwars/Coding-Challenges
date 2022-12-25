#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    string input = "";
    string line;

    while (cin >> line) {
        input += line;
    }

    int lim = stoi(argv[1]);
    long maxProduct = 1;
    for (int i = 0; i < lim; i++) {
        maxProduct *= input[i] - '0';
    }

    long currentProduct = maxProduct;
    int len = input.length();
    for (int i = lim; i < len; i++) {
        if (input[i - lim] == '0') {
            currentProduct = 1;
            for (int j = i - lim + 1; j <= i; j++) {
                currentProduct *= input[j] - '0';
            }
        } else {
            currentProduct = currentProduct / (input[i - lim] - '0') * (input[i] - '0');
        }
        cout << currentProduct << endl;
        maxProduct = max(maxProduct, currentProduct);
    }

    cout << maxProduct << endl;
}