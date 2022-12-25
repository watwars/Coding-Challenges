#define _USE_MATH_DEFINES

#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    deque<int> cards;
    int n;
    cin >> n;

    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cards.push_back(a);
    }

    int serejaScore = 0, dimaScore = 0;
    for (int i = 0; i < n; i++) {
        int score = max(cards.front(), cards.back());
        if (i % 2 == 0)
            serejaScore += score;
        else
            dimaScore += score;

        if (score == cards.front())
            cards.pop_front();
        else
            cards.pop_back();
    }

    cout << serejaScore << " " << dimaScore << endl;
}
