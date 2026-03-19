#include <SFML/Graphics.hpp>

// sf::color(237,232,208) beige
// sf::color(101,67,33) dark brown


void drawBoard(sf::RenderWindow &window){
    window.clear(sf::Color::Black);

    //Initial Square properties
    sf::RectangleShape square;
    square.setSize({100,100});
    square.setOutlineThickness(2.f);
    square.setOutlineColor(sf::Color::Black);

    //Main Drawing loop
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++)
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
    
    window.display();
}

int main(){

    sf::RenderWindow window(sf::VideoMode({800,800}), "First window");

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
            
        }
        
        drawBoard(window);
    }
    return 0;
}