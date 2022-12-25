#define _USE_MATH_DEFINES

#include <algorithm>
#include <bitset>
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

ostream& operator<<(ostream& os, byte b) {
    return os << bitset<8>(to_integer<int>(b));
}
int main() {
    byte b{4};
    cout << b << '\n';
}
