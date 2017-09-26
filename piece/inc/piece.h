#ifndef CHESS_PIECE_H_
#define CHESS_PIECE_H_

#include <string>
#include <vector>
#include "../../utilities/inc/utilities.h"

enum color_t {
  white,
  black
};

class Piece {
public:
    Piece(Coordinate coord_, color_t color_, char symbol_) : coord(coord_), color(color_), symbol(symbol_) {}
    virtual ~Piece() = default;
    virtual Coordinate* getMoveSet() = 0;
    char getSymbol() {return symbol;}
protected:
    Coordinate coord;
    color_t color;
    char symbol;
};

class Pawn : public Piece {
public:
  Pawn(Coordinate coord, color_t color, char symbol) : Piece(coord, color, symbol) {}
  Coordinate* getMoveSet() {return moveSet;};
private:
  Coordinate moveSet[3] = {Coordinate(1, 0),
                           Coordinate(1, 1),
                           Coordinate(-1, 1)};
};

class Rook : public Piece {
public:
  Rook(Coordinate coord, color_t color, char symbol) : Piece(coord, color, symbol) {}
  Coordinate* getMoveSet() {return moveSet;};
private:
  Coordinate moveSet[4] = {Coordinate(0, 1),
                           Coordinate(1, 0),
                           Coordinate(0, -1),
                           Coordinate(-1, 0)};
};

class Bishop : public Piece {
public:
  Bishop(Coordinate coord, color_t color, char symbol) : Piece(coord, color, symbol) {}
  Coordinate* getMoveSet() {return moveSet;};
private:
  Coordinate moveSet[4] = {Coordinate(1, 1),
                           Coordinate(-1, 1),
                           Coordinate(-1, -1),
                           Coordinate(-1, -1)};
};

class Knight : public Piece {
public:
  Knight(Coordinate coord, color_t color, char symbol) : Piece(coord, color, symbol) {}
  Coordinate* getMoveSet() {return moveSet;};
private:
  Coordinate moveSet[8] = {Coordinate(2, 1),
                           Coordinate(1, 2),
                           Coordinate(-1, 2),
                           Coordinate(-2, 1),
                           Coordinate(-2, -1),
                           Coordinate(-1, -2),
                           Coordinate(1, -2),
                           Coordinate(2, -1)};
};

class Queen : public Piece {
public:
  Queen(Coordinate coord, color_t color, char symbol) : Piece(coord, color, symbol) {}
  Coordinate* getMoveSet() {return moveSet;};
private:
  Coordinate moveSet[8] = {Coordinate(1, 0),
                           Coordinate(1, 1),
                           Coordinate(0, 1),
                           Coordinate(-1, 1),
                           Coordinate(-1, 0),
                           Coordinate(-1, -1),
                           Coordinate(0, -1),
                           Coordinate(1, -1)};
};

class King : public Piece {
public:
  King(Coordinate coord, color_t color, char symbol) : Piece(coord, color, symbol) {}
  Coordinate* getMoveSet() {return moveSet;};
private:
  Coordinate moveSet[8] = {Coordinate(1, 0),
                           Coordinate(1, 1),
                           Coordinate(0, 1),
                           Coordinate(-1, 1),
                           Coordinate(-1, 0),
                           Coordinate(-1, -1),
                           Coordinate(0, -1),
                           Coordinate(1, -1)};
};

#endif  // CHESS_PIECE_H_
