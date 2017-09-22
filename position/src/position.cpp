#include "../inc/position.h"

void Position::initBoard() {
  for (int i = 0; i < 8; i++) {
    board[1][i] = new Pawn;
    board[6][i] = new Pawn;
  }

  board[0][0] = new Rook;
  board[0][7] = new Rook;
  board[7][0] = new Rook;
  board[7][7] = new Rook;

  board[0][1] = new Knight;
  board[0][6] = new Knight;
  board[7][1] = new Knight;
  board[7][6] = new Knight;

  board[0][2] = new Bishop;
  board[0][5] = new Bishop;
  board[7][2] = new Bishop;
  board[7][5] = new Bishop;

  board[0][3] = new Queen;
  board[0][3] = new Queen;
  board[7][4] = new King;
  board[7][4] = new King;



}
