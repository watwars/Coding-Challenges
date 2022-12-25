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

int main(int argc, char **argv) {
    int maxCount = 0;
    int maxNumber = 0;
    unordered_map<int, int> cache;
    for (int i = 1; i < 1000000; i++) {
        int count = 0;
        long long int j = i;
        while (j != 1) {
            if (cache.find(j) != cache.end()) {
                count += cache[j];
                break;
            }
            if (j % 2 == 0) {
                j /= 2;
            } else {
                j = 3 * j + 1;
            }
            count += 1;
        }
        cache[i] = count;
        if (count > maxCount) {
            maxCount = count;
            maxNumber = i;
        }
    }
    cout << maxNumber << endl;
}