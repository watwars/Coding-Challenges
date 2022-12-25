#define _USE_MATH_DEFINES

#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> outputs;
    int numC = 0;

    bool startC = true;
    for (int i = 0; i < n; i++) {
        bool isC = startC;
        string output = "";
        for (int j = 0; j < n; j++) {
            if (isC) {
                output += "C";
                numC++;
            } else {
                output += ".";
            }
            isC = !isC;
        }
        outputs.push_back(output);
        startC = !startC;
    }

    cout << numC << endl;
    for (int i = 0; i < n; i++) {
        cout << outputs[i] << endl;
    }
}
