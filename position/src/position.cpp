#include "../inc/position.h"

Position::Position() {
  board[0][0] = new Rook(Coordinate(0, 0), white, rook, 'R');
  board[0][7] = new Rook(Coordinate(0, 7), white, rook, 'R');
  board[7][0] = new Rook(Coordinate(7, 0), black, rook, 'r');
  board[7][7] = new Rook(Coordinate(7, 7), black, rook, 'r');

  board[0][1] = new Knight(Coordinate(0, 1), white, knight, 'N');
  board[0][6] = new Knight(Coordinate(0, 6), white, knight, 'N');
  board[7][1] = new Knight(Coordinate(7, 1), black, knight, 'n');
  board[7][6] = new Knight(Coordinate(7, 6), black, knight, 'n');;

  board[0][2] = new Bishop(Coordinate(0, 2), white, bishop, 'B');
  board[0][5] = new Bishop(Coordinate(0, 5), white, bishop, 'B');
  board[7][2] = new Bishop(Coordinate(7, 2), black, bishop, 'b');
  board[7][5] = new Bishop(Coordinate(7, 5), black, bishop, 'b');

  board[0][3] = new Queen(Coordinate(0, 3), white, queen, 'Q');
  board[7][3] = new Queen(Coordinate(7, 3), black, queen, 'q');
  board[0][4] = new King(Coordinate(0, 4), white, king, 'K');
  board[7][4] = new King(Coordinate(7, 4), black, king, 'k');

  for (int i = 0; i < 8; i++) {
    board[1][i] = new Pawn(Coordinate(1, i), white, pawn, 'P');
    board[6][i] = new Pawn(Coordinate(6, i), black, pawn, 'p');
    pieces.push_front(board[1][i]);
    pieces.push_front(board[6][i]);
    pieces.push_back(board[0][i]);
    pieces.push_back(board[7][i]);
  }
}

void Position::printPosition() {
    std::cout << "\ta\tb\tc\td\te\tf\tg\th\n";
    for (int i = 7; i > -1; i--) {
        std::cout << i + 1;
        for (int j = 0; j < 8; j++) {
             if (board[i][j] != NULL)
                 std::cout << "\t" << board[i][j]->getSymbol();
             else
                 std::cout << "\t.";
        }
        std::cout << "\n";
    }
}

bool Position::addMove(Move mv) {
    if (isLegal(mv)) {
        switch(mv.getPiece()) {

        case pawn:
            switch(mv.getAction()) {
            case no_action:
//                  if (mv.getDestination().row == 4)  {
                board[mv.getDestination().getRow()][mv.getDestination().getFile()] = board[mv.getLocation().getRow()][mv.getLocation().getFile()];
                board[mv.getLocation().getRow()][mv.getLocation().getFile()] = NULL;
//                  }
                break;
            case capture:
                break ;
            case promotion:
                break;
            }
        break;
        default:
            break;
        }
    } else {
      return false;
    }
    return true;
}

bool Position::isLegal(Move& mv) {
    std::list<Piece*> candidates;
    Coordinate destination = mv.getDestination();
    piece_t piece = mv.getPiece();


    for (Piece* p : pieces) {
        if ((p->getPiece() == piece) && canMove(p, destination)) {
            if (isOccupied(destination)) {
                if (toMove == p->getColor())
                    mv.setAction(capture);
            } else {
                candidates.push_back(p);
            }
        }
    }
    switch(mv.getPiece()) {
          case pawn:
              break;
          case rook:
              break;
          case knight:
              break;
          case bishop:
              break;
          case queen:
              break;
          case king:
              break;
          default:
              break;
          }
    return true;
}

bool Position::canMove(const Piece* piece, const Coordinate& destination) const {
    const Coordinate* moveSet = Utilities::getMoveSet(piece->getPiece());
    Coordinate location = piece->getCoordinate();

    for (unsigned int i = 0; i < sizeof(moveSet)/sizeof(*moveSet); i++) {
        if (location + moveSet[i] == destination)
            return true;
    }
    return false;
}

bool Position::isOccupied(const Coordinate& coord) const {
    return true;
}




