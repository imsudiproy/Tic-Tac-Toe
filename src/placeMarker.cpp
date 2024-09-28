#include "header.h"
#include "common.h"

bool placeMarker(int slot, char currentMarker){
    if (slot < 1 || slot > 9 || board[slot-1] == 'O' || board[slot-1] == 'X'){
        return false;
    }
    board[slot-1] = currentMarker;
    return true;
}