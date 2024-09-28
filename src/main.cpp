#include "header.h"
#include "common.h"

int currentPlayer = 1; // 1 for Player X, 2 for Player O
char currentMarker;
bool gameWon = false;
char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
void displayBoard();
bool checkWin();
bool checkDraw();
void switchPlayer(int&, char&);
bool placeMarker(int, char);

int main(){
    std::cout<< "\n **Welcome to Tic-Tac-Toe** \n\n";
    std::cout << "Player 1: X,   Player 2: O\n";
    currentMarker = 'X';

    while(true) {
        displayBoard();
        int slot;

        std::cout<<"Player "<<currentPlayer<<" enter your move(1-9): ";
        std::cin>>slot;
        if(!placeMarker(slot, currentMarker)){
            std::cout<<"Invalid Move!! Try again\n";
            continue;
        }

        //check if the player has won
        if(checkWin()){
            std::cout<<"Player "<<currentPlayer<<" is the Winner\n";
            break;
        }

        if(checkDraw()){
            std::cout<<"Draww\n";
            break;;
        }
        switchPlayer(currentPlayer, currentMarker);
    }

    return 0;
}