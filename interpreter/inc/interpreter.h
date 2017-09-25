#include <iostream>
#include <string>
#include "../../move/inc/move.h"
#include "../../position/inc/position.h"

class Interpreter {
public:
  static bool isLegalMove(Move mv, Position pos);
  static Move moveFromString(std::string);
  static bool interpretPiece(char c);
private:
};
