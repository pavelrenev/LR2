#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> player1(5);
    vector<int> player2(5);

    for (int i = 0; i < 5; i++) {
        cin >> player1[i];
    }

    for (int i = 0; i < 5; i++) {
        cin >> player2[i];
    }

    int moves = 0;
    while (!player1.empty() && !player2.empty()) {
        int card1 = player1[0];
        player1.erase(player1.begin());
        int card2 = player2[0];
        player2.erase(player2.begin());

        if ((card1 == 0 && card2 == 9) || (card1 > card2 && !(card1 == 9 && card2 == 0))) {
            player1.push_back(card1);
            player1.push_back(card2);
        }
        else {
            player2.push_back(card1);
            player2.push_back(card2);
        }

        moves++;

        if (moves > 1000000) {
            cout << "botva" << endl;
            return 0;
        }
    }

    if (player1.empty()) {
        cout << "second " << moves << endl;
    }
    else {
        cout << "first " << moves << endl;
    }

    return 0;
}