#include "../inc/move.h"

void Move::setPiece(char c) {
	switch (c) {
	case 'R':
		piece = rook;
		break;
	case 'N':
		piece = knight;
		break;
	case 'B':
		piece = bishop;
		break;
	case 'Q':
		piece = queen;
		break;
	case 'K':
		piece = king;
		break;
	case 'p':
		piece = pawn;
		break;
	default:
		valid = false;
		break;
	}
}

void Move::setPromotion(char c) {
	switch (c) {
	case 'R':
		promotion = rook;
		break;
	case 'N':
		promotion = knight;
		break;
	case 'B':
		promotion = bishop;
		break;
	case 'Q':
		promotion = queen;
		break;
	default:
		valid = false;
		break;
	}
}

void Move::setFileSpecifier(char c) {
	if (Utilities::digitInRange(c - '0' - 1))
		fileSpecifier = c - 'a';
	else
		valid = false;
}

void Move::setRowSpecifier(char c) {
	if (Utilities::digitInRange(c - '0' - 1))
		rowSpecifier = c - '0' - 1;
	else
		valid = false;
}

void Move::setDestination(char r, char f) {
	if (Utilities::digitInRange(r - '0' - 1) && Utilities::digitInRange(f - 'a'))
		destination = Coordinate(r - '0' - 1, f - 'a');
	else
		valid = false;
}

void Move::setLocation(char r, char f) {
	if (Utilities::digitInRange(r - '0' - 1) && Utilities::digitInRange(f - 'a'))
		location = Coordinate(r - '0' - 1, f - 'a');
	else
		valid = false;
}


