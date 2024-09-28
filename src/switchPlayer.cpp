#include "header.h"

//switch player after each turn
void switchPlayer(int currentPlayer, char currentMarker){
    if(currentPlayer == 1){
        currentPlayer = 2;
        currentMarker = 'O';
    } else {
        currentPlayer = 1;
        currentMarker = 'X';
    }
}