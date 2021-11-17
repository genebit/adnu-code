//******************************************************************
// Filename: 
// Date: November 17, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: PFE Tic-Tac-Toe Board
// Program Description: Create a TicTacToe program that shows the player placement within the board each move.
// Input: Begins with a 3x3 Input char starting from A - I indicating the board, followed by T as number of player moves, followed by 2 input each line indicating the player's turn and their placement within the board (string & char)
// Output: Display the placements of the player after their inputs and replace any unused grid to *.
//
// Honor Code:
//   This is my own program. I have not received any
//   unauthorized help in completing this work. I have not
//   copied from my classmate, friend, nor any unauthorized
//   resource. I am well aware of the policies stipulated
//   in the handbook regarding academic dishonesty. If proven
//   guilty, I won't be credited any points for this activity.
//
// Complete Name: Johcel Gene T. Bitara
// ID Number: 202100012
// Year-Course: 1-BSIT
// DCS, College of Computer Studies
// Ateneo de Naga University
//******************************************************************
#include <iostream>

using namespace std;
int main() {
    
    // Fill in the board with the letters
    char board[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> board[i][j];
        }
    }
    int player_moves;
    cin >> player_moves;
    
    string player;
    char move, player_sym;
    // Process the board and replace with the player's placement within the board
    for (int i = 0; i < player_moves; i++) { 
        cin >> player >> move;
        if (player == "P1") player_sym = 'O';
        if (player == "P2") player_sym = 'X';
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                // Change the board's letter according to the player's symbol and placement
                if (move == board[i][j]) board[i][j] = player_sym;
            }
        }
    }
    
    // Output
    // Use this list for replacing the unused letters to *
    char letters[9] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I' };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 9; k++) {
                if (board[i][j] == letters[k]) board[i][j] = '*';
            }
            cout << board[i][j];
        }
        cout << endl;
    }
    return 0;
}