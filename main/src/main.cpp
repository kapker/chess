//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include "../../utilities/inc/utilities.h"
#include "../../game/inc/game.h"
#include "../../move/inc/move.h"
#include "../../interpreter/inc/interpreter.h"



int main() {
  Game game;
  game.getPosition().printPosition();

  std::string str;
  std::cin >> str;
  Move move = Interpreter::moveFromString(str);
	return 0;
}
