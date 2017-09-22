#include "../inc/piece.h"

std::vector<std::tuple<int, int>> Pawn::getMoveSet() {
  std::vector<std::tuple<int, int>> moveSet = {std::make_tuple(1,1)};
  return moveSet;
}

std::vector<std::tuple<int, int>> Rook::getMoveSet() {
  std::vector<std::tuple<int, int>> moveSet = {std::make_tuple(1,1)};
  return moveSet;
}

std::vector<std::tuple<int, int>> Knight::getMoveSet() {
  std::vector<std::tuple<int, int>> moveSet = {std::make_tuple(1,1)};
  return moveSet;
}

std::vector<std::tuple<int, int>> Bishop::getMoveSet() {
  std::vector<std::tuple<int, int>> moveSet = {std::make_tuple(1,1)};
  return moveSet;
}

std::vector<std::tuple<int, int>> Queen::getMoveSet() {
  std::vector<std::tuple<int, int>> moveSet = {std::make_tuple(1,1)};
  return moveSet;
}

std::vector<std::tuple<int, int>> King::getMoveSet() {
  std::vector<std::tuple<int, int>> moveSet = {std::make_tuple(1,1)};
  return moveSet;
}
