#include <SFML/Graphics.hpp>
#include <iostream>
#include <string> // for string and to_string()
#include <vector>
#include <unistd.h> // for linux
#include "parameters.hpp"

int i;
sf::Font font;

class DisplayedData : public sf::Text {
public:
    std::string ObjectName;

    void setAttributes(int x, int y, const std::string& string, const sf::Font& font) {
        setPosition(x, y);
        setString(string);
        setFont(font); // font is a sf::Font
        setCharacterSize(24); // in pixels, not points!
        setFillColor(sf::Color::Red);
        setStyle(sf::Text::Bold);
    }
};

void update(sf::RenderWindow& window, DisplayedData data[]) {
    window.clear(sf::Color(48, 168, 172, 1));

    for (int j = 0; j < count; j++) {
        data[j].setAttributes(pos[j][0], pos[j][1], "penis", font);
        window.draw(data[j]);
    }

    window.display();
}

int main() {
    sf::RenderWindow window(sf::VideoMode(window_size[0], window_size[1]), "Datalogger UI");

    if (!font.loadFromFile("arial.ttf")) {
        std::cerr << "Error loading font\n";
        return -1;
    }

    DisplayedData data[count];

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        update(window, data);
    }

    return 0;
}
