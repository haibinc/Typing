#include <iostream>
#include "SFML/Graphics.hpp"
#include "Typing.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Application");
    Typing typing;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            typing.addEventHandler(window, event);

        }
        typing.update();
        window.clear();
        window.draw(typing);
        window.display();
    }
    return 0;
}
