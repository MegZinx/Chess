#pragma once
#include "Piece.h"
class Board
{
private:
    Piece squares[64];
public:
    Board();
    void setup();
    Piece& at(int row, int col);
    void drawBoard(sf::RenderWindow &window);
};