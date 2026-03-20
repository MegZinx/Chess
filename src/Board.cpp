#include "Board.h"
#include "Piece.h"

Board::Board(){
    for (int i = 0; i < 64; i++)
    {
        squares[i].type = Piece::Type::NONE;
        squares[i].color = Piece::Color::NONE;
    }
    
}

Piece& Board::at(int row, int col){
    return squares[row * 8 + col];
}

void Board::setup(){
    Piece::Type backRow[] = {
        Piece::Type::ROOK,
        Piece::Type::KNIGHT,
        Piece::Type::BISHOP,
        Piece::Type::QUEEN,
        Piece::Type::KING,
        Piece::Type::BISHOP,
        Piece::Type::KNIGHT,
        Piece::Type::ROOK,
    };

    //Black Back Row
    for (int col = 0; col < 8; col++)
    {
        at(0, col).type = backRow[col];
        at(0, col).color = Piece::Color::BLACK;
    }
    
    //Black Pawn Row
    for (int col = 0; col < 8; col++)
    {
        at(1, col).type = Piece::Type::PAWN;
        at(1, col).color = Piece::Color::BLACK;
    }

    //White Pawn Row
    for (int col = 0; col < 8; col++)
    {
        at(6, col).type = Piece::Type::PAWN;
        at(6, col).color = Piece::Color::WHITE;
    }

    //White Back Row
    for (int col = 0; col < 8; col++)
    {
        at(7, col).type = backRow[col];
        at(7, col).color = Piece::Color::WHITE;
    }
}