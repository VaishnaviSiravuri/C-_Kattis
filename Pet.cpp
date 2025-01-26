#include <iostream>
using namespace std;

int main() {
    int contestant = 1, winner = 0, max_score = 0;

    int g1, g2, g3, g4;

    while (contestant <= 5) {
        cin >> g1 >> g2 >> g3 >> g4;

        int score = g1 + g2 + g3 + g4;

        if (score > max_score) {
            max_score = score;
            winner = contestant;
        }

        contestant++;
    }

    cout << winner << " " << max_score << endl;

    return 0;
}