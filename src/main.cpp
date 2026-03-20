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

void drawRook(sf::RenderWindow &window, float x, float y, Piece::Color color){
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

void drawKnight(sf::RenderWindow &window, float x, float y, Piece::Color color){
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
    S1.setPosition({x - 5, y + 10});
    S2.setPosition({x + 45, y + 5});
    S3.setPosition({x + 35, y + 10});

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

            } else if (b.at(row, col).type == Piece::Type::ROOK)
            {
                drawRook(window, centerX, centerY, color);

            } else if (b.at(row, col).type == Piece::Type::KNIGHT)
            {
                drawKnight(window, centerX, centerY, color);
            }
            
            
            
        }
        
    }
    
}

int main(){

    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode({800,800}), "Chess-Cpp", sf::Style::Default, sf::State::Windowed, settings);
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