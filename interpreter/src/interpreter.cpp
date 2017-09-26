#include "../inc/interpreter.h"

bool Interpreter::isLegalMove(Move mv, Position pos) {
  return true;
}

Move Interpreter::moveFromString(std::string str) {
    if (str.length() == 2) { // pawn move
        file_t file;
        switch(str[0]) {
            case 'a': file = a;
                      break;
            case 'b': file = b;
                      break;
            case 'c': file = c;
                      break;
            case 'd': file = d;
                      break;
            case 'e': file = e;
                      break;
            case 'f': file = f;
                      break;
            case 'g': file = g;
                      break;
            case 'h': file = h;
                      break;
            default:  file = a;
                      break;
        }
        Move mv(pawn, move, Coordinate(str[1]-'0', file), Coordinate(str[1], file));

    } else {
        Move mv;
    }
    return mv;
}

piece_t Interpreter::interpretPiece(char c) {
    piece_t piece;
    switch(c) {
        case 'R': piece = rook;
                  break;
        case 'N': piece = knight;
                  break;
        case 'B': piece = bishop;
                  break;
        case 'Q': piece = queen;
                  break;
        case 'K': piece = king;
                      break;
        default: piece = pawn;
     }
     return piece;
}
