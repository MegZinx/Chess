#pragma once
#include <SFML/Graphics.hpp>
#include "Piece.h"
#include "Board.h"

class Renderer
{
public:
    void drawKing(sf::RenderWindow &window, float x, float y, Piece::Color color);
    void drawPawn(sf::RenderWindow &window, float x, float y, Piece::Color color);
    void drawBishop(sf::RenderWindow &window, float x, float y, Piece::Color color);
    void drawRook(sf::RenderWindow &window, float x, float y, Piece::Color color);
    void drawQueen(sf::RenderWindow &window, float x, float y, Piece::Color color);
    void drawKnight(sf::RenderWindow &window, float x, float y, Piece::Color color);
    void drawPieces(sf::RenderWindow &window, Board &b);
};

