#include<iostream>
#include<string>
using namespace std;

int main (){
    const int SIZE = 8;
    char board[SIZE][SIZE];

    for (int row = 0; row < SIZE; row++){
        for (int col = 0; col < SIZE; col++){
            board[row][col] = ' ';
        }
    }

    char backRank[SIZE] = {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'};

    for (int col = 0; col < SIZE; col++){
        board[0][col] = backRank[col];
        board[1][col] = 'P';
        board[6][col] = 'P';
        board[7][col] = backRank[col];
    }

    for (int row = 0; row < SIZE; row++){
        for(int col = 0; col < SIZE; col++){
            cout << board[row][col];
        }
        cout << endl;
    }

    // ---- added: move loop ----
    string from, to;
    while (true){
        cout << "Move from (e.g. e2), or 'q' to quit: ";
        cin >> from;
        if (from == "q") break;

        cout << "Move to: ";
        cin >> to;

        // parse "from" into row1, col1
        int col1 = from[0] - 'a';
        int row1 = 8 - (from[1] - '0');

        // parse "to" into row2, col2
        int col2 = to[0] - 'a';
        int row2 = 8 - (to[1] - '0');

        bool inRange = (col1 >= 0 && col1 < SIZE && row1 >= 0 && row1 < SIZE &&
                         col2 >= 0 && col2 < SIZE && row2 >= 0 && row2 < SIZE);

        if (!inRange){
            cout << "Invalid square, try again.\n";
            continue;
        }

        if (board[row1][col1] == ' '){
            cout << "No piece there, try again.\n";
            continue;
        }

        // apply the move (no legality checking yet)
        board[row2][col2] = board[row1][col1];
        board[row1][col1] = ' ';

        // reprint the board after the move
        for (int row = 0; row < SIZE; row++){
            for(int col = 0; col < SIZE; col++){
                cout << board[row][col];
            }
            cout << endl;
        }
    }
    // ---- end added ----

    return 0;
}