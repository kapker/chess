#ifndef CHESS_POSITION_H_
#define CHESS_POSITION_H_

#include <list>
#include "../../move/inc/move.h"
#include "../../piece/inc/piece.h"

class Position {
public:
    Position();
    void printPosition();
    bool addMove(Move mv);
    std::list<Piece*> getPieces() {return pieces;}
private:
    int castles[4] = {1, 1, 1, 1};
    color_t toMove = white;
    Piece* board[8][8] = {{NULL}};
    std::list<Piece*> pieces;
    bool isLegal(Move& mv);
    bool canMove(const Piece* piece, const Coordinate& destination) const;
    bool isOccupied(const Coordinate& coord) const;
};



#endif  // CHESS_POSITION_H_
