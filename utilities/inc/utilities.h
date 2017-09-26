#ifndef CHESS_UTILITIES_H_
#define CHESS_UTILITIES_H_

class Coordinate {
public:
    int y = 0, x = 0;
    Coordinate() {}
    Coordinate(int y_, int x_) :  y(y_), x(x_) {}

    Coordinate operator + (const Coordinate& param) {
        Coordinate coord(y+param.y, x+param.x);
        return coord;
    }
    Coordinate operator - (const Coordinate& param) {
        Coordinate coord(y-param.y, x-param.x);
        return coord;
    }
};

#endif  // CHESS_UTILITIES_H_
