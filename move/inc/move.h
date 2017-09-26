#ifndef CHESS_MOVE_H_
#define CHESS_MOVE_H_

#include <iostream>
#include <string>
#include "../../utilities/inc/utilities.h"

enum action_t {
  move,
  capture,
  promotion
};
enum piece_t {
  pawn,
  rook,
  knight,
  bishop,
  queen,
  king
};

enum file_t {
  a = 0,
  b,
  c,
  d,
  e,
  f,
  g,
  h
};

class Move {
public:
  Move(piece_t piece_, action_t action_, Coordinate location_, Coordinate destination_) :
      piece(piece_), action(action_), location(location_), destination(destination_) {}
  piece_t getPiece() {return piece;}
  action_t getAction() {return action;}
  Coordinate getDestination() {return destination;}
private:
  piece_t piece;
  action_t action;
  Coordinate location, destination;
};

#endif  // CHESS_MOVE_H_
