#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> blocks;
    int maxSize = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        blocks.push_back(a);
        maxSize = max(maxSize, a);
    }

    vector<vector<int>> matrix;
    for (int i : blocks) {
        vector<int> row;
        row.resize(maxSize);
        for (int j = 0; j < i; j++) {
            row[j] = 1;
        }
        matrix.push_back(row);
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < maxSize; j++) {
            int a = i;
            int b = j;
            while (a != n - 1 && matrix[a][b] == 1 && matrix[a + 1][b] == 0) {
                matrix[a][b] = 0;
                matrix[a + 1][b] = 1;
                a++;
            }
        }
    }

    int idx = 0;
    for (auto i : matrix) {
        int count = 0;
        for (auto j : i) {
            if (j == 1) {
                count++;
            } else {
                break;
            }
        }
        cout << count;
        if (idx != n - 1) {
            cout << " ";
        }
        idx++;
    }
    cout << endl;
}
