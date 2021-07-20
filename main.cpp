#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <math.h>

using namespace std;

string board = "x x x\nx x x\nx x x";

//A vector of a column containing row vector (row, column)
vector<vector<int>> boardVector;

int main() {
    bool running = true;
    cout << "Welcome to Rain." << endl;
    cout << "Type WASD characters and press enter to move." << endl << endl;
    generateBoard();
    while(running) {
        //cout << board << endl;
        char direction = getchar();
        switch(direction) {
            case 'a':
                break;
            case 'w':
                break;
            case 's':
                break;
            case 'd':
                break;
        }
        printBoard();
    }
}

//Generate the initial board in the boardVector
void initialiseBoard() {
    for(int i = 0; i < 3; i++) {
        cout << "Row: " << i << endl;
        vector<int> row;
        row.push_back(0);
        row.push_back(0);
        row.push_back(1);
        boardVector.push_back(row);
    }
}

//Generate board for expanding in new direction
void generateBoard(char direction) {
    
}

//Compute the board string from the boardVector and display it
void printBoard() {
}