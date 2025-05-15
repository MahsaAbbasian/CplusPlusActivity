#include<iostream>
#include <cstdlib>
using namespace std;

void drawGameTable();
void switchPlayerMark();
void inputPosition();
char checkWin();
bool isDraw();

char board[9] = {'1','2','3','4','5','6','7','8','9'};
int position;
char playerMark = 'O';
bool GameHasWinner = false;
int movesCount = 0;

int main() {
    cout << "Welcome to Tic Tac Toe!\n";
    drawGameTable();

    while (!GameHasWinner && !isDraw()) {
        cout << "\nPlease enter a board position (1-9): ";
        cout << "\nIt's player " << playerMark << "'s turn.\n";
        cin >> position;

        inputPosition();
        drawGameTable();

        char winner = checkWin();
        if (winner == 'X' || winner == 'O') {
            cout << "\nPlayer " << winner << " wins!\n";
            GameHasWinner = true;
            break;
        }

        if (isDraw()) {
            cout << "\nIt's a draw!\n";
            break;
        }

        switchPlayerMark();
    }

    return 0;
}

void drawGameTable() {
   #ifdef _WIN32
   // system("cls");
#else
    system("clear");
#endif
    cout << "\n****************** Tic Tac Toe ******************\n";
    cout << "+-----------+\n";
    cout << "| " << board[0] << " | " << board[1] << " | " << board[2] << " |\n";
    cout << "+---+---+---+\n";
    cout << "| " << board[3] << " | " << board[4] << " | " << board[5] << " |\n";
    cout << "+---+---+---+\n";
    cout << "| " << board[6] << " | " << board[7] << " | " << board[8] << " |\n";
    cout << "+-----------+\n";
}

void switchPlayerMark() {
    playerMark = (playerMark == 'X') ? 'O' : 'X';
}

void inputPosition() {
	if (!(cin >> position)) {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Invalid input. Please enter a number.\n";
    inputPosition();
    return;
}
    int index = position - 1;
    if (index >= 0 && index < 9 && board[index] == '1' + index) {
        board[index] = playerMark;
        movesCount++;
    } else {
        cout << "Invalid or occupied field. Try again.\n";
        cin >> position;
        inputPosition();
    }
}

char checkWin() {
    int winPatterns[8][3] = {
        {0,1,2}, {3,4,5}, {6,7,8}, // Rows
        {0,3,6}, {1,4,7}, {2,5,8}, // Columns
        {0,4,8}, {2,4,6}           // Diagonals
    };

    for (auto &pattern : winPatterns) {
        if (board[pattern[0]] == board[pattern[1]] &&
            board[pattern[1]] == board[pattern[2]]) {
            return board[pattern[0]];
        }
    }
    return ' ';
}

bool isDraw() {
    return movesCount >= 9;
}
