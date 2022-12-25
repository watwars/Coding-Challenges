#include <iostream>
#include <vector>

using namespace std;

const int width = 20;
const int height = 20;
const int len = 4;

int horizontalMaxProduct(vector<vector<int>> &grid) {
    int maxProduct = 0;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width - len + 1; j++) {
            int product = 1;
            for (int k = j; k < j + len; k++) {
                product *= grid[i][k];
            }
            maxProduct = max(maxProduct, product);
        }
    }

    return maxProduct;
}

int verticalMaxProduct(vector<vector<int>> &grid) {
    int maxProduct = 0;
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height - len + 1; j++) {
            int product = 1;
            for (int k = j; k < j + len; k++) {
                product *= grid[k][i];
            }
            maxProduct = max(maxProduct, product);
        }
    }
    return maxProduct;
}

int leftDiagonalMaxProduct(vector<vector<int>> &grid) {
    int maxProduct = 0;
    for (int i = 0; i < height - len + 1; i++) {
        for (int j = 0; j < width - len + 1; j++) {
            int product = 1;
            for (int k = 0; k < len; k++) {
                product *= grid[i + k][j + k];
            }
            maxProduct = max(maxProduct, product);
        }
    }
    return maxProduct;
}

int rightDiagonalMaxProduct(vector<vector<int>> &grid) {
    int maxProduct = 0;
    for (int i = 0; i < height - len + 1; i++) {
        for (int j = len - 1; j < width; j++) {
            int product = 1;
            for (int k = 0; k < len; k++) {
                product *= grid[i + k][j - k];
            }
            maxProduct = max(maxProduct, product);
        }
    }
    return maxProduct;
}

int main() {
    vector<vector<int>> grid;

    for (int i = 0; i < height; i++) {
        vector<int> row;
        for (int j = 0; j < width; j++) {
            int n;
            cin >> n;
            row.push_back(n);
        }
        grid.push_back(row);
    }

    // // print grid
    // for (int i = 0; i < height; i++) {
    //     for (int j = 0; j < width; j++) {
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int horizontalProduct = horizontalMaxProduct(grid);
    int verticalProduct = verticalMaxProduct(grid);
    int leftDiagonalProduct = leftDiagonalMaxProduct(grid);
    int rightDiagonalProduct = rightDiagonalMaxProduct(grid);
    cout << horizontalProduct << endl;
    cout << verticalProduct << endl;
    cout << leftDiagonalProduct << endl;
    cout << rightDiagonalProduct << endl;
    int maxProduct = max(horizontalProduct, max(verticalProduct, max(leftDiagonalProduct, rightDiagonalProduct)));
    cout << maxProduct << endl;
}