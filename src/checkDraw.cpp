#include "common.h"
#include "header.h"


//function to check if game is draw
bool checkDraw(){
    for (int i = 0; i<9; i++){
        if (board[i] !='X' && board[i] != 'O'){
            return false;
        }
    }
    return true;
}