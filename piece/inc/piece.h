#include <string>
#include <vector>
#include <tuple>

#define TUP(y, x) std::make_tuple(y, x)

enum color_t {
  white,
  black
};

class Piece {
public:
  virtual ~Piece() = default;
protected:
  std::tuple<int, int> coords;
  color_t color;
  virtual std::vector<std::tuple<int, int>> getMoveSet() = 0;
};

class Pawn : public Piece {
public:
  std::vector<std::tuple<int, int>> getMoveSet();
private:
  std::vector<std::tuple<int, int>> moveSet = {TUP(1, 0),
                                                 TUP(1, 1),
                                                 TUP(-1, 1)};
};

class Rook : public Piece {
public:
  std::vector<std::tuple<int, int>> getMoveSet();
private:
private:
  std::vector<std::tuple<int, int>> moveSet = {TUP(0, 1),
                                               TUP(1, 0),
                                               TUP(0, -1),
                                               TUP(-1, 0)};
};

class Bishop : public Piece {
public:
  std::vector<std::tuple<int, int>> getMoveSet();
private:
  std::vector<std::tuple<int, int>> moveSet = {TUP(1, 1),
                                               TUP(-1, 1),
                                               TUP(-1, -1),
                                               TUP(-1, -1)};
};

class Knight : public Piece {
public:
  std::vector<std::tuple<int, int>> getMoveSet();
private:
  std::vector<std::tuple<int, int>> moveSet = {TUP(2, 1),
                                               TUP(1, 2),
                                               TUP(-1, 2),
                                               TUP(-2, 1),
                                               TUP(-2, -1),
                                               TUP(-1, -2),
                                               TUP(1, -2),
                                               TUP(2, -1)};
};

class Queen : public Piece {
public:
  std::vector<std::tuple<int, int>> getMoveSet();
private:
  std::vector<std::tuple<int, int>> moveSet = {TUP(1, 0),
                                               TUP(1, 1),
                                               TUP(0, 1),
                                               TUP(-1, 1),
                                               TUP(-1, 0),
                                               TUP(-1, -1),
                                               TUP(0, -1),
                                               TUP(1, -1)};
};

class King : public Piece {
public:
  std::vector<std::tuple<int, int>> getMoveSet();
private:
  std::vector<std::tuple<int, int>> moveSet = {TUP(1, 0),
                                               TUP(1, 1),
                                               TUP(0, 1),
                                               TUP(-1, 1),
                                               TUP(-1, 0),
                                               TUP(-1, -1),
                                               TUP(0, -1),
                                               TUP(1, -1)};
};
