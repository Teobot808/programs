#include <SFML/Graphics.hpp>
#include <iostream>
#include <string> // for string and to_string()
#include<unistd.h>               // for linux 
#include <vector>
#include "parameters.hpp"

int i;
sf::Font font;


/*
void setAtributes(int x, int y, std::string string, sf::Font font ){
 text.setPosition(x, y);
 text.setString(string);
text.setFont(font); // font is a sf::Font
text.setCharacterSize(24); // in pixels, not points!
text.setFillColor(sf::Color::Red);
text.setStyle(sf::Text::Bold);
}
*/








void update(sf::RenderWindow& window, sf::Text text0, sf::Text text1, sf::Text text2, sf::Text text3, sf::Text text4, sf::Text text5, sf::Text text6, sf::Text text7){
/*
if(i < 40){
 
        window.clear(sf::Color(48, 168, 172, 1));
        //window.draw(shape);
 
 i++;
text.setPosition((10 + (10* i)),(( 50 + 10*i)));
text.setString(std::to_string(i));
text1.setPosition(temperature_pos[0], temperature_pos[1]);
text1.setString(temperature);
window.draw(text);
window.draw(text1);
sleep(1);
 
}
 
else {
i = 0;
}
*/
/*
for(int j = 0; j < count; j++){
window.clear(sf::Color(48, 168, 172, 1));
//text[j].setAtributes(pos[j][0], pos[j][1], "penis", font);
text[j].setPosition(pos[j][0], pos[j][1]);
 text[j].setString("penis");
text[j].setFont(font); // font is a sf::Font
text[j].setCharacterSize(24); // in pixels, not points!
text[j].setFillColor(sf::Color::Red);
text[j].setStyle(sf::Text::Bold);


window.draw(text[j]);
sleep(1);




}

*/


window.clear(sf::Color(48, 168, 172, 1));
window.draw(text0);
window.draw(text1);
window.draw(text2);
window.draw(text3);
window.draw(text4);
window.draw(text5);
window.draw(text6);
window.draw(text7);

window.display();


}





int main()
{
    sf::RenderWindow window(sf::VideoMode(window_size[0], window_size[1]), "Datalogger UI");
  // sf::Text text;
  sf::Text text0;
sf::Text text1;
sf::Text text2;
sf::Text text3;
sf::Text text4;
sf::Text text5;
sf::Text text6;
sf::Text text7;

//std::vector<sf::Text>




//sf::Font font;
if (!font.loadFromFile("arial.ttf"))
{
    // error...
}




/*
// select the font
text.setFont(font); // font is a sf::Font

// set the string to display
text.setString("Hello world");

// set the character size
text.setCharacterSize(24); // in pixels, not points!

// set the color
text.setFillColor(sf::Color::Red);

// set the text style
text.setStyle(sf::Text::Bold | sf::Text::Underlined);
 i = 0;
   
*/

text0.setFont(font);
text0.setCharacterSize(24);
text0.setFillColor(sf::Color::Red);
text0.setStyle(sf::Text::Bold | sf::Text::Underlined);
text0.setString("gec");
text0.setPosition(batt_stat_pos[0],batt_stat_pos[1]);

text1.setFont(font);
text1.setCharacterSize(24);
text1.setFillColor(sf::Color::Red);
text1.setStyle(sf::Text::Bold | sf::Text::Underlined);
text1.setString("gec");
text1.setPosition(avg_vel_pos[0],avg_vel_pos[1]);
/*
text2.setFont(font);
text2.setCharacterSize(24);
text2.setFillColor(sf::Color::Red);
text2.setStyle(sf::Text::Bold | sf::Text::Underlined);
text2.setString("gec");
text2.setPosition(velocity_pos[0], velocity_pos[1]);
*/
text2.setFont(font);
text2.setCharacterSize(24);
text2.setFillColor(sf::Color::Red);
text2.setStyle(sf::Text::Bold | sf::Text::Underlined);
text2.setString("gec");
text2.setPosition(exrunremain_pos[0], exrunremain_pos[1]);

text3.setFont(font);
text3.setCharacterSize(24);
text3.setFillColor(sf::Color::Red);
text3.setStyle(sf::Text::Bold | sf::Text::Underlined);
text3.setString("gec");
text3.setPosition(temperature_pos[0], temperature_pos[1]);

text4.setFont(font);
text4.setCharacterSize(24);
text4.setFillColor(sf::Color::Red);
text4.setStyle(sf::Text::Bold | sf::Text::Underlined);
text4.setString("gec");
text4.setPosition(ampere_pos[0], ampere_pos[1]);

text5.setFont(font);
text5.setCharacterSize(24);
text5.setFillColor(sf::Color::Red);
text5.setStyle(sf::Text::Bold | sf::Text::Underlined);
text5.setString("gec");
text5.setPosition(velocity_pos[0], velocity_pos[1]);

text6.setFont(font);
text6.setCharacterSize(24);
text6.setFillColor(sf::Color::Red);
text6.setStyle(sf::Text::Bold | sf::Text::Underlined);
text6.setString("gec");
text6.setPosition(time_remain_pos[0], time_remain_pos[1]);

text7.setFont(font);
text7.setCharacterSize(24);
text7.setFillColor(sf::Color::Red);
text7.setStyle(sf::Text::Bold | sf::Text::Underlined);
text7.setString("gec");
text7.setPosition(com_type_pos[0], com_type_pos[1]);

//DisplayedData data[count];


 while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
/*
if(i < 40){

        window.clear();
        //window.draw(shape);

 i++;
text.setPosition((10 + (10* i)),(( 50 + 10*i)));
text.setString(std::to_string(i));
window.draw(text);
sleep(1);

}

else {
i = 0;
}
window.display();
*/
update(window, text0, text1, text2, text3, text4, text5, text6, text7);  
  }

    return 0;
}
