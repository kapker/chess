#include <string>
#include <vector>
#include <tuple>

class Piece {
public:
  virtual ~Piece() = default;
protected:
  std::tuple<int, int> coords;
  virtual std::vector<std::tuple<int, int>> getMoveSet() = 0;
};

class Pawn : public Piece {
  std::vector<std::tuple<int, int>> getMoveSet();
};

class Rook : public Piece {
  std::vector<std::tuple<int, int>> getMoveSet();
};

class Bishop : public Piece {
  std::vector<std::tuple<int, int>> getMoveSet();
};

class Knight : public Piece {
  std::vector<std::tuple<int, int>> getMoveSet();
};

class Queen : public Piece {
  std::vector<std::tuple<int, int>> getMoveSet();
};

class King : public Piece {
  std::vector<std::tuple<int, int>> getMoveSet();
};
