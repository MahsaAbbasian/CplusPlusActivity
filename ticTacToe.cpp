//TicTacToe Game
#include<iostream>
using namespace std;
void drowGameTable();
void switchPlayerMark();
void inputposition();
char checkWin();

char board[9] = {'1','2','3','4','5','6','7','8','9'};
//player1 turn
int position;
char playerMark = 'O';
bool GameHasWinner ;
bool keepSamePlayer = true;

int main() {

	cout << "Please look at our board below. There is a table with 9 slot and each slot has a uniq number." << endl; 
	cout << "we will have 2 player X and O in this Game." << endl;
	drowGameTable();

		while (GameHasWinner = true)
	{
		cout << "please Enter board position number between 1-9" << endl;
		cout << "Its player " << playerMark << " turn now." << endl;
		cin >> position;
		inputposition();
	    if (keepSamePlayer == true)
		{
		switchPlayerMark();
		}
		else if (keepSamePlayer == false)
		{
			cout << "****************Same player " << playerMark << " need to enter another empety position on the table again." << endl;
			inputposition();

		}

		drowGameTable();
		checkWin();

	}

	return 0;
}
/*******************************************************************
	 FUNCTION TO DRAW Game BOARD OF TIC TAC TOE
********************************************************************/

void drowGameTable() {
	cout << "******************Tic Tac Toe Game**********************" << endl;
	cout << "+-----------+" << endl;
	cout << "| " << board[0] << " | " << board[1] << " | " << board[2] << " | " << endl;
	cout << "+---+---+---+" << endl;
	cout << "| " << board[3] << " | " << board[4] << " | " << board[5] << " | " << endl;
	cout << "+---+---+---+" << endl;
	cout << "| " << board[6] << " | " << board[7] << " | " << board[8] << " | " << endl;
	cout << "+-----------+" << endl;
}

void switchPlayerMark() {

	if (playerMark == 'X')
	{
		playerMark = 'O';
	}
	else
	{
		playerMark = 'X';
	}
}
void inputposition() {

	if (position == 1)
	{
		if (board[0] == '1') 
		{
			board[0] = playerMark;
		}
		else {
			
			cout << "This field is taken. Please try another number" << endl;
			keepSamePlayer == false;
		}
		
	}
	else if (position == 2)
	{
		if (board[1] == '2')
		{
			board[1] = playerMark;
		}
		else {
			keepSamePlayer == false;
			cout << "This field is taken. Please try another number" << endl;
		}
	}
	else if (position == 3)
	{
		if (board[2] == '3')
		{
			board[2] = playerMark;
		}
		else {
			keepSamePlayer == false;
			cout << "This field is taken. Please try another number" << endl;
		}
	}
	else if (position == 4)
	{
		if (board[3] == '4')
		{
			board[3] = playerMark;
		}
		else {
			keepSamePlayer == false;
			cout << "This field is taken. Please try another number" << endl;
		}
	}
	else if (position == 5)
	{
		if (board[4] == '5')
		{
			board[4] = playerMark;
		}
		else {
			keepSamePlayer == false;
			cout << "This field is taken. Please try another number" << endl;
		}

	}
	else if (position == 6)
	{
		if (board[5] == '6')
		{
			board[5] = playerMark;
		}
		else {
			keepSamePlayer == false;
			cout << "This field is taken. Please try another number" << endl;
		}

	}
	else if (position == 7)
	{
		if (board[6] == '7')
		{
			board[6] = playerMark;
		}
		else {
			keepSamePlayer == false;
			cout << "This field is taken. Please try another number" << endl;
		}

	}
	else if (position == 8)
	{
		if (board[7] == '8')
		{
			board[7] = playerMark;
		}
        else {
			keepSamePlayer == false;
			cout << "This field is taken. Please try another number" << endl;
		}

	}
	else if (position == 9)
	{
		if (board[8] == '9')
		{
			board[8] = playerMark;
		}
		else {
			keepSamePlayer == false;
			cout << "This field is taken. Please try another number" << endl;
		}

	}
	else
	{
	    keepSamePlayer == false;
	    cout << "You have entered a non-valid position. Please enter a valid move." << endl;

	}
}
char checkWin() {
	if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X') {
		cout << "X is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') {
		cout << "X is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') {
		cout << "X is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') {
		cout << "X is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') {
		cout << "X is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') {
		cout << "X is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') {
		cout << "X is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O') {
		cout << "O is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') {
		cout << "O is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') {
		cout << "O is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') {
		cout << "O is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O') {
		cout << "O is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') {
		cout << "O is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') {
		cout << "O is winner" << endl;
		GameHasWinner = false;
		exit(EXIT_SUCCESS);
	}
	return '/';
}