#include "header.h"
#include "common.h"
//checkWin checks if any player is winning
bool checkWin(){
    //checking the rows
    if (board[0] == board[1] and board[1] == board[2])
        return true;
    else if (board[3] == board[4] and board[4] == board[5])
        return true;
    else if (board[6] == board[7] and board[7] == board[8])
        return true;

    //checking columns
    if (board[0] == board[3] and board[3] == board[6])
        return true;
    else if (board[1] == board[4] and board[4] == board[7])
        return true;
    else if (board[2] == board[5] and board[5] == board[8])
        return true;

    //checking diagonals

    if((board[0] == board[4] and board[4] == board[8]) or 
    (board[6] == board[4] and board[4] == board[2]))
        return true;

    //return false if non of the above condition is true
    return false;
}