#include "header.h"
#include "common.h"

void displayBoard(){
    std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " "<< std::endl;
    std::cout << "___|___|___" << std::endl;
    std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " "<< std::endl;
    std::cout << "___|___|___" << std::endl;
    std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " "<< std::endl;
}