#ifndef CHESS_POSITION_H_
#define CHESS_POSITION_H_

#include "../../move/inc/move.h"
#include "../../piece/inc/piece.h"

class Position {
public:
    Position();
    void printPosition();
    bool addMove(Move mv);
private:
    Piece* board[8][8] = {{NULL}};
    bool isLegal(Move mv);
};



#endif  // CHESS_POSITION_H_
