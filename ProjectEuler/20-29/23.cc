#define _USE_MATH_DEFINES

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int sumDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i * i == n) {
                sum += i;
            } else {
                sum += i;
                if (i != 1) {
                    sum += n / i;
                }
            }
        }
    }
    return sum;
}

bool isAbundantNumber(int n) {
    int divisorSum = sumDivisors(n);
    return divisorSum > n;
}

int main(int argc, char **argv) {
    int MAX = 28123;
    vector<int> abundantNumbers;
    for (int i = 12; i <= MAX; i++) {
        if (isAbundantNumber(i)) {
            abundantNumbers.push_back(i);
        }
    }

    unordered_set<int> abundantSums;
    for (int i = 0; i < abundantNumbers.size(); i++) {
        for (int j = 0; j < abundantNumbers.size(); j++) {
            abundantSums.insert(abundantNumbers[i] + abundantNumbers[j]);
        }
    }

    long sum = 0;
    for (int i = 1; i <= MAX; i++) {
        if (abundantSums.find(i) == abundantSums.end()) {
            sum += i;
        }
    }
    cout << sum << endl;
}