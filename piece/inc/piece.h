#ifndef CHESS_PIECE_H_
#define CHESS_PIECE_H_

#include <string>
#include <vector>
#include "../../utilities/inc/utilities.h"

class Piece {
public:
    Piece(Coordinate coord_, color_t color_, piece_t piece_, char symbol_) : coord(coord_), color(color_), piece(piece_), symbol(symbol_) {}
    char getSymbol() const {return symbol;}
    piece_t getPiece() const {return piece;}
    color_t getColor() const {return color;}
    Coordinate getCoordinate() const {return coord;}
protected:
    Coordinate coord;
    color_t color;
    piece_t piece;
    char symbol;
};

class Pawn : public Piece {
public:
  Pawn(Coordinate coord, color_t color, piece_t piece, char symbol) : Piece(coord, color, piece, symbol) {}
};

class Rook : public Piece {
public:
  Rook(Coordinate coord, color_t color, piece_t piece, char symbol) : Piece(coord, color, piece, symbol) {}
};

class Bishop : public Piece {
public:
  Bishop(Coordinate coord, color_t color, piece_t piece, char symbol) : Piece(coord, color, piece, symbol) {}
};

class Knight : public Piece {
public:
  Knight(Coordinate coord, color_t color, piece_t piece, char symbol) : Piece(coord, color, piece, symbol) {}
};

class Queen : public Piece {
public:
  Queen(Coordinate coord, color_t color, piece_t piece, char symbol) : Piece(coord, color, piece, symbol) {}
};

class King : public Piece {
public:
  King(Coordinate coord, color_t color, piece_t piece, char symbol) : Piece(coord, color, piece, symbol) {}
};

#endif  // CHESS_PIECE_H_
