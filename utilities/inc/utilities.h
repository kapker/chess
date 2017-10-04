#ifndef CHESS_UTILITIES_H_
#define CHESS_UTILITIES_H_

enum action_t {
    no_action,
    capture,
    promotion
};
enum piece_t {
	no_piece,
    pawn,
    rook,
    knight,
    bishop,
    queen,
    king
};

enum color_t {
	no_color,
    white,
    black
};

class Coordinate {
    int row = -1;
    int file = -1;
public:
    Coordinate() {}
    Coordinate(int r, int f) : row(r), file(f) {}
    int getRow() const {return row;}
    int getFile() const {return file;}

    bool operator == (const Coordinate& param);
    Coordinate& operator + (const Coordinate& param);
    Coordinate& operator - (const Coordinate& param);
    Coordinate operator + (const Coordinate& param) const;
    Coordinate operator - (const Coordinate& param) const;
};







class Utilities {
    static const Coordinate pawnMoveSet[];
    static const Coordinate rookMoveSet[];
    static const Coordinate knightMoveSet[];
    static const Coordinate bishopMoveSet[];
    static const Coordinate queenMoveSet[];
    static const Coordinate kingMoveSet[];
public:
    static const Coordinate* getMoveSet(piece_t piece);
    static const bool digitInRange(int digit) {return (digit >= 0 && digit <= 7);}
//    static const bool alphaInRange(char lower) {return (lower >= 'a' && lower <= 'h');}
};
#endif  // CHESS_UTILITIES_H_
