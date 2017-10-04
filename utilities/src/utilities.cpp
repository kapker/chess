#include "../inc/utilities.h"

bool Coordinate::operator == (const Coordinate& param) {
    if (row == param.row && file == param.file)
      return true;
    else
      return false;
}

Coordinate& Coordinate::operator + (const Coordinate& param) {
    row += param.row;
    file +=param.file;
    return *this;
}

Coordinate& Coordinate::operator - (const Coordinate& param) {
    row -= param.row;
    file -=param.file;
    return *this;
}

Coordinate Coordinate::operator + (const Coordinate& param) const {
    Coordinate coord(row + param.row, file + param.file);
    return coord;
}
Coordinate Coordinate::operator - (const Coordinate& param) const {
    Coordinate coord(row - param.row, file - param.file);
    return coord;
}

const Coordinate* Utilities::getMoveSet(piece_t piece) {
    const Coordinate* moveSet;
    switch(piece) {
    	case no_piece:
    		moveSet = {};
    		break;
        case pawn:
            moveSet = pawnMoveSet;
            break;
        case rook:
            moveSet = rookMoveSet;
            break;
        case knight:
            moveSet = knightMoveSet;
            break;
        case bishop:
            moveSet = bishopMoveSet;
            break;
        case queen:
            moveSet = queenMoveSet;
            break;
        case king:
            moveSet = kingMoveSet;
            break;
        }
    return moveSet;
}

const Coordinate Utilities::pawnMoveSet[] = {Coordinate(1, 0),
                                     Coordinate(1, 1),
                                     Coordinate(-1, 1)};

const Coordinate Utilities::rookMoveSet[] = {Coordinate(0, 1),
                                     Coordinate(1, 0),
                                     Coordinate(0, -1),
                                     Coordinate(-1, 0)};

const Coordinate Utilities::knightMoveSet[] = {Coordinate(2, 1),
                                       Coordinate(1, 2),
                                       Coordinate(-1, 2),
                                       Coordinate(-2, 1),
                                       Coordinate(-2, -1),
                                       Coordinate(-1, -2),
                                       Coordinate(1, -2),
                                       Coordinate(2, -1)};

const Coordinate Utilities::bishopMoveSet[] = {Coordinate(1, 1),
                                       Coordinate(-1, 1),
                                       Coordinate(-1, -1),
                                       Coordinate(-1, -1)};

const Coordinate Utilities::queenMoveSet[] = {Coordinate(1, 0),
                                      Coordinate(1, 1),
                                      Coordinate(0, 1),
                                      Coordinate(-1, 1),
                                      Coordinate(-1, 0),
                                      Coordinate(-1, -1),
                                      Coordinate(0, -1),
                                      Coordinate(1, -1)};

const Coordinate Utilities::kingMoveSet[] = {Coordinate(1, 0),
                                     Coordinate(1, 1),
                                     Coordinate(0, 1),
                                     Coordinate(-1, 1),
                                     Coordinate(-1, 0),
                                     Coordinate(-1, -1),
                                     Coordinate(0, -1),
                                     Coordinate(1, -1)};
