#include <SFML/Graphics.hpp>
#include "Piece.h"
#include "Board.h"
#include "Renderer.h"

void Renderer::drawPawn(sf::RenderWindow &window, float x, float y, Piece::Color color){
    
    //Shape Initialization
    sf::CircleShape triangle(25.f, 3);
    sf::CircleShape circle(12.5);

    //Shape Outline
    circle.setOutlineThickness(1.f);
    triangle.setOutlineThickness(1.f);

    //Shape Position
    triangle.setPosition({x, y + 25});
    circle.setPosition({x + 12, y + 5});

    //Shape Color
    if (color == Piece::Color::BLACK)
    {
        triangle.setFillColor(sf::Color::Black);
        circle.setFillColor(sf::Color::Black);

        circle.setOutlineColor(sf::Color(255, 255, 255));
        triangle.setOutlineColor(sf::Color(255, 255, 255));

    } else if (color == Piece::Color::WHITE)
    {
        triangle.setFillColor(sf::Color(255, 255, 255));
        circle.setFillColor(sf::Color(255, 255, 255));

        circle.setOutlineColor(sf::Color::Black);
        triangle.setOutlineColor(sf::Color::Black);
    }

    //Shape Draw
    window.draw(triangle);
    window.draw(circle);
}

void Renderer::drawRook(sf::RenderWindow &window, float x, float y, Piece::Color color){
    //Shape Initialization
    sf::RectangleShape R1({25, 50});
    sf::RectangleShape R2({20, 30});
    sf::RectangleShape R3({20, 30});

    //Shape Outline
    R1.setOutlineThickness(1.f);
    R2.setOutlineThickness(1.f);
    R3.setOutlineThickness(1.f);
    
    //Shape Position
    R1.setPosition({x + 15, y + 10});
    R2.setPosition({x - 5, y});
    R3.setPosition({x + 40, y});

    //Shape Color
    if (color == Piece::Color::BLACK)
    {
        R1.setFillColor(sf::Color::Black);
        R2.setFillColor(sf::Color::Black);
        R3.setFillColor(sf::Color::Black);

        R1.setOutlineColor(sf::Color(255, 255, 255));
        R2.setOutlineColor(sf::Color(255, 255, 255));
        R3.setOutlineColor(sf::Color(255, 255, 255));

    } else if (color == Piece::Color::WHITE)
    {
        R1.setFillColor(sf::Color(255, 255, 255));
        R2.setFillColor(sf::Color(255, 255, 255));
        R3.setFillColor(sf::Color(255, 255, 255));

        R1.setOutlineColor(sf::Color::Black);
        R2.setOutlineColor(sf::Color::Black);
        R3.setOutlineColor(sf::Color::Black);
    }

    //Shape Draw
    window.draw(R1);
    window.draw(R2);
    window.draw(R3);
}

void Renderer::drawKnight(sf::RenderWindow &window, float x, float y, Piece::Color color){
    //Shape Initialization
    sf::RectangleShape S1({25, 50});
    sf::CircleShape S2(20, 3);
    sf::CircleShape S3(15);

    //Shape Outline
    S1.setOutlineThickness(1.f);
    S2.setOutlineThickness(1.f);
    S3.setOutlineThickness(1.f);
    
    //Shape Rotation
    S2.setRotation(sf::degrees(90));

    //Shape Position
    S1.setPosition({x - 8, y + 10});
    S2.setPosition({x + 42, y + 5});
    S3.setPosition({x + 32, y + 10});

    //Shape Color
    if (color == Piece::Color::BLACK)
    {
        S1.setFillColor(sf::Color::Black);
        S2.setFillColor(sf::Color::Black);
        S3.setFillColor(sf::Color::Black);

        S1.setOutlineColor(sf::Color(255, 255, 255));
        S2.setOutlineColor(sf::Color(255, 255, 255));
        S3.setOutlineColor(sf::Color(255, 255, 255));

    } else if (color == Piece::Color::WHITE)
    {
        S1.setFillColor(sf::Color(255, 255, 255));
        S2.setFillColor(sf::Color(255, 255, 255));
        S3.setFillColor(sf::Color(255, 255, 255));

        S1.setOutlineColor(sf::Color::Black);
        S2.setOutlineColor(sf::Color::Black);
        S3.setOutlineColor(sf::Color::Black);
    }

    //Shape Draw
    window.draw(S1);
    window.draw(S2);
    window.draw(S3);
}

void Renderer::drawBishop(sf::RenderWindow &window, float x, float y, Piece::Color color){
    //Shape Initialization
    sf::CircleShape S1(25, 3);
    sf::CircleShape S2(25, 3);
    sf::CircleShape S3(15);

    //Shape Outline
    S1.setOutlineThickness(1.f);
    S2.setOutlineThickness(1.f);
    S3.setOutlineThickness(1.f);

    //Shape Position
    S1.setPosition({x, y + 25});
    S2.setPosition({x, y + 10});
    S3.setPosition({x + 10, y});

    //Shape Color
    if (color == Piece::Color::BLACK)
    {
        S1.setFillColor(sf::Color::Black);
        S2.setFillColor(sf::Color::Black);
        S3.setFillColor(sf::Color::Black);

        S1.setOutlineColor(sf::Color(255, 255, 255));
        S2.setOutlineColor(sf::Color(255, 255, 255));
        S3.setOutlineColor(sf::Color(255, 255, 255));

    } else if (color == Piece::Color::WHITE)
    {
        S1.setFillColor(sf::Color(255, 255, 255));
        S2.setFillColor(sf::Color(255, 255, 255));
        S3.setFillColor(sf::Color(255, 255, 255));

        S1.setOutlineColor(sf::Color::Black);
        S2.setOutlineColor(sf::Color::Black);
        S3.setOutlineColor(sf::Color::Black);
    }

    //Shape Draw
    window.draw(S1);
    window.draw(S2);
    window.draw(S3);
}

void Renderer::drawQueen(sf::RenderWindow &window, float x, float y, Piece::Color color){
    //Shape Initialization
    sf::CircleShape S1(12.5);
    sf::CircleShape S2(12.5);
    sf::CircleShape S3(12.5);
    sf::RectangleShape S4({60, 25});
    sf::RectangleShape S5({20, 35});
    sf::RectangleShape S6({20, 35});
    sf::RectangleShape S7({20, 35});

    //Shape Outline
    S1.setOutlineThickness(1.f);
    S2.setOutlineThickness(1.f);
    S3.setOutlineThickness(1.f);
    S4.setOutlineThickness(1.f);
    S5.setOutlineThickness(1.f);
    S6.setOutlineThickness(1.f);
    S7.setOutlineThickness(1.f);

    //Shape Rotation
    S5.setRotation(sf::degrees(-15));
    S7.setRotation(sf::degrees(15));

    //Shape Position
    S1.setPosition({x - 22, y});
    S2.setPosition({x + 12, y});
    S3.setPosition({x + 47, y});
    S4.setPosition({x - 5, y + 40});
    S5.setPosition({x - 20, y + 15});
    S6.setPosition({x + 15, y + 10});
    S7.setPosition({x + 50, y + 10});

    //Shape Color
    if (color == Piece::Color::BLACK)
    {
        S1.setFillColor(sf::Color::Black);
        S2.setFillColor(sf::Color::Black);
        S3.setFillColor(sf::Color::Black);
        S4.setFillColor(sf::Color::Black);
        S5.setFillColor(sf::Color::Black);
        S6.setFillColor(sf::Color::Black);
        S7.setFillColor(sf::Color::Black);

        S1.setOutlineColor(sf::Color(255, 255, 255));
        S2.setOutlineColor(sf::Color(255, 255, 255));
        S3.setOutlineColor(sf::Color(255, 255, 255));
        S4.setOutlineColor(sf::Color(255, 255, 255));
        S5.setOutlineColor(sf::Color(255, 255, 255));
        S6.setOutlineColor(sf::Color(255, 255, 255));
        S7.setOutlineColor(sf::Color(255, 255, 255));

    } else if (color == Piece::Color::WHITE)
    {
        S1.setFillColor(sf::Color(255, 255, 255));
        S2.setFillColor(sf::Color(255, 255, 255));
        S3.setFillColor(sf::Color(255, 255, 255));
        S4.setFillColor(sf::Color(255, 255, 255));
        S5.setFillColor(sf::Color(255, 255, 255));
        S6.setFillColor(sf::Color(255, 255, 255));
        S7.setFillColor(sf::Color(255, 255, 255));

        S1.setOutlineColor(sf::Color::Black);
        S2.setOutlineColor(sf::Color::Black);
        S3.setOutlineColor(sf::Color::Black);
        S4.setOutlineColor(sf::Color::Black);
        S5.setOutlineColor(sf::Color::Black);
        S6.setOutlineColor(sf::Color::Black);
        S7.setOutlineColor(sf::Color::Black);
    }

    //Shape Draw
    window.draw(S7);
    window.draw(S5);
    window.draw(S6);
    window.draw(S4);
    window.draw(S3);
    window.draw(S1);
    window.draw(S2);
    
}

void Renderer::drawKing(sf::RenderWindow &window, float x, float y, Piece::Color color){
    //Shape Initialization
    sf::RectangleShape R1({20, 50});
    sf::RectangleShape R2({50, 20});
    sf::CircleShape C1(25, 5);

    //Shape Outline
    R1.setOutlineThickness(1.f);
    R2.setOutlineThickness(1.f);
    C1.setOutlineThickness(1.f);
    
    //Shape Position
    R1.setPosition({x + 15, y - 10});
    R2.setPosition({x, y});
    C1.setPosition({x, y + 20});

    //Shape Color
    if (color == Piece::Color::BLACK)
    {
        R1.setFillColor(sf::Color::Black);
        R2.setFillColor(sf::Color::Black);
        C1.setFillColor(sf::Color::Black);

        R1.setOutlineColor(sf::Color(255, 255, 255));
        R2.setOutlineColor(sf::Color(255, 255, 255));
        C1.setOutlineColor(sf::Color(255, 255, 255));

    } else if (color == Piece::Color::WHITE)
    {
        R1.setFillColor(sf::Color(255, 255, 255));
        R2.setFillColor(sf::Color(255, 255, 255));
        C1.setFillColor(sf::Color(255, 255, 255));

        R1.setOutlineColor(sf::Color::Black);
        R2.setOutlineColor(sf::Color::Black);
        C1.setOutlineColor(sf::Color::Black);
    }

    //Shape Draw
    window.draw(R2);
    window.draw(R1);
    window.draw(C1);
}

void Renderer::drawPieces(sf::RenderWindow &window, Board &b){
    
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            float centerX = (float(col) * 100) + 25;
            float centerY = (float(row) * 100) + 25;
            Piece::Color color = b.at(row, col).color;

            if (b.at(row, col).type == Piece::Type::PAWN)
            {
                drawPawn(window, centerX, centerY, color);

            } else if (b.at(row, col).type == Piece::Type::ROOK)
            {
                drawRook(window, centerX, centerY, color);

            } else if (b.at(row, col).type == Piece::Type::KNIGHT)
            {
                drawKnight(window, centerX, centerY, color);

            } else if (b.at(row, col).type == Piece::Type::BISHOP)
            {
                drawBishop(window, centerX, centerY, color);

            } else if (b.at(row, col).type == Piece::Type::QUEEN)
            {
                drawQueen(window, centerX, centerY, color);

            } else if (b.at(row, col).type == Piece::Type::KING)
            {
                drawKing(window, centerX, centerY, color);
            }
            
        }
        
    }
    
}
