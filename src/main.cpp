#include <SFML/Graphics.hpp>
#include "Piece.h"
#include "Board.h"
#include "Renderer.h"


int main(){

    //Anti Aliasing Setting
    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;

    //Window Renderer
    sf::RenderWindow window(sf::VideoMode({800,800}), "Chess-Cpp", sf::Style::Default, sf::State::Windowed, settings);

    //Objects
    Board board;
    Renderer render;

    //Constructors
    board.setup();

    //Main Loop
    while (window.isOpen())
    {
        //Event Handeler
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
            
        }

        window.clear(sf::Color::Black);
        board.drawBoard(window);
        render.drawPieces(window, board);
        window.display();
    }
    return 0;
}