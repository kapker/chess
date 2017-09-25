#include "../inc/interpreter.h"

bool Interpreter::isLegalMove(Move mv, Position pos) {
  return true;
}

Move Interpreter::moveFromString(std::string str) {
  Move mv;
  if (str.length() == 2) { // pawn move
  }

  return mv;
}

bool Interpreter::interpretPiece(char c) {
switch(c) {
    case 'p': piece = pawn;
              break;
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
    default: return false;
  }
  return true;
}
