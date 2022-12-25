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

const int ROW = 15;

int main(int argc, char **argv) {
    vector<vector<int>> triangle;
    int k = 1;
    int n;
    for (int i = 0; i < ROW; i++) {
        vector<int> row;
        for (int j = 0; j < k; j++) {
            cin >> n;
            row.push_back(n);
        }
        triangle.push_back(row);
        k++;
    }

    for (int i = ROW - 2; i >= 0; i--) {
        for (int j = 0; j < triangle[i].size(); j++) {
            triangle[i][j] += max(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }

    cout << triangle[0][0] << endl;
}
