#include "header.h"
#include "common.h"

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
void displayBoard();

int main(){
    std::cout<< "\n **Welcome to Tic-Tac-Toe** \n\n";
    displayBoard();
}