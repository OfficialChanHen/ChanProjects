// A Tic-Tac-Toe game for two players

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

void GetPlayersRole(char* player1, char* player2) {
	
	cout << "Enter a X or O for Player 1 to begin: ";
	cin >> *player1;
	
	if (*player1 == 'X') {
		*player2 = 'O';
	}
	else if (*player1 == 'O') {
		*player2 = 'X';
	}
	else {
		cout << "Invalid character for Player 1" << endl << endl;
		GetPlayersRole(player1, player2);
	}
}

void PrintBoard(char spaces[10]){
	
	cout << endl;
	cout << setw(10) << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << endl;
	cout << setw(20) << "-----------" << endl;
	cout << setw(10) << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << endl;
	cout << setw(20) << "-----------" << endl;
	cout << setw(10) << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << endl;
}

void WinningGame(bool* win, char spaces[10], int* count) {
	
	*count += 1;
	
	if ((spaces[0] == spaces[1]) && (spaces[1] == spaces[2]) && (spaces[2] == spaces[0])) {
		*win = true;
	}
	else if ((spaces[3] == spaces[4]) && (spaces[4] == spaces[5]) && (spaces[5] == spaces[3])) {
		*win = true;
	}
	else if ((spaces[6] == spaces[7]) && (spaces[7] == spaces[8]) && (spaces[8] == spaces[6])) {
		*win = true;
	}
	else if ((spaces[0] == spaces[3]) && (spaces[3] == spaces[6]) && (spaces[6] == spaces[0])) {
		*win = true;
	}
	else if ((spaces[1] == spaces[4]) && (spaces[4] == spaces[7]) && (spaces[7] == spaces[1])) {
		*win = true;
	}
	else if ((spaces[2] == spaces[5]) && (spaces[5] == spaces[8]) && (spaces[8] == spaces[2])) {
		*win = true;
	}
	else if ((spaces[0] == spaces[4]) && (spaces[4] == spaces[8]) && (spaces[8] == spaces[0])) {
		*win = true;
	}
	else if ((spaces[2] == spaces[4]) && (spaces[4] == spaces[6]) && (spaces[6] == spaces[2])) {
		*win = true;
	}
	else {
		*win = false;
	}
}


int main() {
	
		
	char spaces[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char player1;
	char player2;
	char repeatGame;
	int playerChoice;
	int count = 0;
	bool win = false;
	bool quitGame = false;
		
	cout << setw(28) << "Welcome to Tic-Tac-Toe" << endl << endl;
	GetPlayersRole(&player1, &player2);
	cout << endl;
	cout << "Player 1: " << player1 << endl << "Player 2: " << player2 << endl;
	PrintBoard(spaces);
	cout << endl;
	
	while (win == false) {
			
		cout << "Player 1, enter a number to place your " << player1 << ": ";
		cin >> playerChoice;
		if (spaces[playerChoice - 1] == 'X' || spaces[playerChoice - 1] == 'O' || (playerChoice > 9) || (playerChoice < 1)) {
			do {
				cout << endl;
				cout << "The space is already taken or invalid number choice" << endl;
				PrintBoard(spaces);
				cout << endl;
				cout << "Player 1, enter a number to place your " << player1 << ": ";
				cin >> playerChoice;
			} while ((spaces[playerChoice - 1] == 'X') || (spaces[playerChoice - 1] == 'O'));
		}
		spaces[playerChoice - 1] = player1;
		PrintBoard(spaces);
		cout << endl;
		WinningGame(&win, spaces, &count);
		if ((win == true) || (count == 9)) {
			break;
		}
			
		cout << "Player 2, enter a number to place your " << player2 << ": ";
		cin >> playerChoice;
		if (spaces[playerChoice - 1] == 'X' || spaces[playerChoice - 1] == 'O' || (playerChoice > 9) || (playerChoice < 1)) {
			do {
				cout << endl;
				cout << "The space is already taken or invalid number choice" << endl;
				PrintBoard(spaces);
				cout << endl;
				cout << "Player 2, enter a number to place your " << player2 << ": ";
				cin >> playerChoice;
			} while ((spaces[playerChoice - 1] == 'X') || (spaces[playerChoice - 1] == 'O'));
		}
		spaces[playerChoice - 1] = player2;
		PrintBoard(spaces);
		cout << endl;
		WinningGame(&win, spaces, &count);
	}
		
	if ((count == 9) && (win == false)) {
		cout << "The game ended in a draw" << endl << endl;
	}
	else {
		if (count % 2 == 1) {
			cout << "The winner is Player 1" << endl << endl;
		}
		else {
			cout << "The winner is Player 2" << endl << endl;
		}
	}
		
	cout << "Play again? Enter Y for yes or any other key for no: ";
	cin >> repeatGame;
	if (repeatGame == 'Y' || repeatGame == 'y') {
		main();
	}
			
	return 0;
}
