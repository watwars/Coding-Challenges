#define _USE_MATH_DEFINES

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

const int DIM = 20;

long long solve(int x, int y, unordered_map<string, long long>& cache) {
    string key = to_string(x) + "," + to_string(y);
    cout << key << endl;
    if (cache.find(key) != cache.end()) {
        return cache[key];
    }
    if (x == DIM && y == DIM) {
        return 0;
    }
    if (x == DIM) {
        return 1;
    }
    if (y == DIM) {
        return 1;
    }
    long long result = solve(x + 1, y, cache) + solve(x, y + 1, cache);
    cache[key] = result;
    return result;
}

int main(int argc, char** argv) {
    unordered_map<string, long long> cache;
    cout << solve(0, 0, cache) << endl;
}