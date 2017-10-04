#include "../inc/interpreter.h"

bool Interpreter::isLegalMove(Move mv, Position pos) {
	return true;
}

Move Interpreter::moveFromString(std::string str) {
	Move move;
	if (isupper(str[0])) { // piece
		if (str[1] == 'x' && str.length() == 4) { // capture
			move.setPiece(str[0]);
			move.setAction(capture);
			move.setDestination(str[3], str[2]);
		} else if (islower(str[1])) { // (a): destination file or file specifier
			if (str[2] == 'x' && str.length() == 5) { // capture, (a) was file specifier
				move.setPiece(str[0]);
				move.setAction(capture);
				move.setFileSpecifier(str[1]);
				move.setDestination(str[4], str[3]);
			} else if (islower(str[2]) && str.length() == 4) { // destination file, (a) was file specifier
				move.setPiece(str[0]);
				move.setFileSpecifier(str[1]);
				move.setDestination(str[3], str[2]);
			} else if (isdigit(str[2]) && str.length() == 3) { // destination row, (a) was destination file
				move.setPiece(str[0]);
				move.setDestination(str[2], str[1]);
			} else if (isdigit(str[2])) { // row specifier, (a) was file specifier
				if (str[3] == 'x' && str.length() == 6) { // capture
					move.setPiece(str[0]);
					move.setAction(capture);
					move.setFileSpecifier(str[1]);
					move.setRowSpecifier(str[2]);
					move.setDestination(str[5], str[4]);
				} else if (islower(str[3]) && str.length() == 5) { // destination file
					move.setPiece(str[0]);
					move.setFileSpecifier(str[1]);
					move.setRowSpecifier(str[2]);
					move.setDestination(str[5], str[4]);
				}
			}
		} else if (isdigit(str[1])) { // row specifier
			if (str[2] == 'x' && str.length() == 5) { // capture
				move.setPiece(str[0]);
				move.setAction(capture);
				move.setRowSpecifier(str[1]);
				move.setDestination(str[4], str[3]);
			} else if (islower(str[2]) && str.length() == 4) { // destination file
				move.setPiece(str[0]);
				move.setRowSpecifier(str[1]);
				move.setDestination(str[3], str[2]);
			}
		}
	} else if (islower(str[0])) { // pawn, (a): destination file or file specifier
		if (str[1] == 'x' && str.length() == 4) { // capture, (a) was file specifier
			move.setPiece('p');
			move.setAction(capture);
			move.setFileSpecifier(str[0]);
			move.setDestination(str[3], str[2]);
		} else if (isdigit(str[1])) { // destination row, (a) was destination file
			if (str.length() == 2) { // pawn move
				move.setPiece('p');
				move.setDestination(str[1], str[0]);
			} else if (str[2] == '=' && str.length() == 4) { // promotion
				move.setPiece('p');
				move.setDestination(str[1], str[0]);
				move.setPromotion(str[3]);
			}
		}
	}
	return move;
}

piece_t Interpreter::interpretPiece(char c) {
	piece_t piece;
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
	default:
		piece = pawn;
	}
	return piece;
}
