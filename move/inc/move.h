#ifndef CHESS_MOVE_H_
#define CHESS_MOVE_H_

#include <iostream>
#include <string>
#include "../../utilities/inc/utilities.h"

class Move {
public:
    piece_t getPiece() const {return piece;}
    piece_t getPromotion() const {return promotion;}
    action_t getAction() const {return action;}
    int getRowSpecifier() const {return rowSpecifier;}
    int getFileSpecifier() const {return fileSpecifier;}
    Coordinate getLocation() const {return location;}
    Coordinate getDestination() const {return destination;}

    void setPiece(char p);
    void setPromotion(char p);
    void setAction(action_t a) {action = a;}
    void setRowSpecifier(char s);
    void setFileSpecifier(char s);
    void setLocation(char r, char f);
    void setDestination(char r, char f);
private:
    int rowSpecifier = -1;
    int fileSpecifier = -1;
    bool valid = true;
    piece_t piece = no_piece;
    piece_t promotion = no_piece;
    action_t action = no_action;
    Coordinate location, destination;
};

#endif  // CHESS_MOVE_H_
