#include <string>
#include "../../fen/inc/fen.h"
#include "../../piece/inc/piece.h"

class Position {
public:
private:
  Piece* board[8][8];
  void initBoard();
};
