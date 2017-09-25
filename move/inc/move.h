#include <iostream>
#include <string>

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

enum color_t {
  white,
  black
};
enum file_t {
  a,
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
  void setPiece(piece_t p) {piece = p;}
  void setAction(action_t a) {action = a;}
  void setColor(color_t c) {color = c;}
private:
  piece_t piece;
  action_t action;
  color_t color;
  std::tuple<int, int> loc, des;
};
