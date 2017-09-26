#ifndef CHESS_GAME_H_
#define CHESS_GAME_H_

#include "../../position/inc/position.h"

class Game {
public:
  Position getPosition() {return position;}
private:
  Position position;
};

#endif  // CHESS_GAME_H_
