#include "../inc/position.h"

Position::Position() {
  for (int i = 0; i < 8; i++) {
    board[1][i] = new Pawn(Coordinate(1, i), white, 'P');
    board[6][i] = new Pawn(Coordinate(6, i), black, 'p');
  }

  board[0][0] = new Rook(Coordinate(0, 0), white, 'R');
  board[0][7] = new Rook(Coordinate(0, 7), white, 'R');
  board[7][0] = new Rook(Coordinate(7, 0), black, 'r');
  board[7][7] = new Rook(Coordinate(7, 7), black, 'r');

  board[0][1] = new Knight(Coordinate(0, 1), white, 'N');
  board[0][6] = new Knight(Coordinate(0, 6), white, 'N');
  board[7][1] = new Knight(Coordinate(7, 1), black, 'n');
  board[7][6] = new Knight(Coordinate(7, 6), black, 'n');

  board[0][2] = new Bishop(Coordinate(0, 2), white, 'B');
  board[0][5] = new Bishop(Coordinate(0, 5), white, 'B');
  board[7][2] = new Bishop(Coordinate(7, 2), black, 'b');
  board[7][5] = new Bishop(Coordinate(7, 5), black, 'b');

  board[0][3] = new Queen(Coordinate(0, 3), white, 'Q');
  board[7][3] = new Queen(Coordinate(7, 3), black, 'q');
  board[0][4] = new King(Coordinate(0, 4), white, 'K');
  board[7][4] = new King(Coordinate(7, 4), black, 'k');
}

void Position::printPosition() {
    std::cout << "\ta\tb\tc\td\te\tf\tg\th\n";
    for (int i = 7; i > -1; i--) {
        std::cout << i+1;
        for (int j = 0; j < 8; j++) {
             if (board[i][j] != NULL)
                 std::cout << "\t" << board[i][j]->getSymbol();
             else
                 std::cout << "\t.";
        }
        std::cout << "\n";
    }
}

bool Position::addMove(Move move) {
    if (isLegal(move)) {

    }

    return true;
}

bool Position::isLegal(Move mv) {
    return true;
}
