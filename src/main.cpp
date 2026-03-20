#include <SFML/Graphics.hpp>
#include "Piece.h"
#include "Board.h"

void drawBoard(sf::RenderWindow &window){
    window.clear(sf::Color::Black);

    //Initial Square properties
    sf::RectangleShape square;
    square.setSize({100,100});
    square.setOutlineThickness(2.f);
    square.setOutlineColor(sf::Color::Black);

    //Main Drawing loop
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            //Position logic
            square.setPosition({float(j) * 100, float(i) * 100});
            //Color Alternation
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    square.setFillColor(sf::Color(101,67,33));
                } else {
                    square.setFillColor(sf::Color(237,232,208));
                }
            } else {
                if (j % 2 == 0)
                {
                    square.setFillColor(sf::Color(237,232,208));
                } else {
                    square.setFillColor(sf::Color(101,67,33));
                }
            }
            
            window.draw(square);
        }
        
    }
    
}

void drawPawn(sf::RenderWindow &window, float x, float y, Piece::Color color){
    
    //Shape Initialization
    sf::CircleShape triangle(25.f, 3);
    sf::CircleShape circle(12.5);

    //Shape Outline
    circle.setOutlineColor(sf::Color::Black);
    circle.setOutlineThickness(1.f);

    triangle.setOutlineColor(sf::Color::Black);
    triangle.setOutlineThickness(1.f);

    //Shape Position
    triangle.setPosition({x, y + 25});
    circle.setPosition({x + 12, y + 5});

    //Shape Color
    if (color == Piece::Color::BLACK)
    {
        triangle.setFillColor(sf::Color::Black);
        circle.setFillColor(sf::Color::Black);

    } else if (color == Piece::Color::WHITE)
    {
        triangle.setFillColor(sf::Color(255, 255, 255));
        circle.setFillColor(sf::Color(255, 255, 255));
    }

    //Shape Draw
    window.draw(triangle);
    window.draw(circle);
}

void drawPieces(sf::RenderWindow &window, Board &b){
    
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

            }
            
        }
        
    }
    
}

int main(){

    sf::RenderWindow window(sf::VideoMode({800,800}), "Chess-Cpp");
    Board board;
    board.setup();
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
            
        }

        window.clear(sf::Color::Black);
        drawBoard(window);
        drawPieces(window, board);
        window.display();
    }
    return 0;
}