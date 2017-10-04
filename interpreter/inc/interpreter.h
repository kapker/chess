#ifndef CHESS_INTERPRETER_H_
#define CHESS_INTERPRETER_H_

#include <iostream>
#include <string>
//#include <cctype>
#include "../../move/inc/move.h"
#include "../../position/inc/position.h"

class Interpreter {
public:
  static bool isLegalMove(Move mv, Position pos);
  static Move moveFromString(std::string);
  static piece_t interpretPiece(char c);
private:
};

#endif  // CHESS_INTERPRETER_H_
