#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Audio/Music.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 900), "DemonstarXP");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

		sf::Texture texture;
		if (!texture.loadFromFile("background.jpg")){
		}
		sf::Sprite sprite;
		sprite.setTexture(texture);
		window.draw(sprite);
		// load a 32x32 rectangle that starts at (10, 10)
		sf::Texture planes;
		if (!planes.loadFromFile("image.png"))
		{
		}
		sf::Sprite plane;
		plane.setTexture(planes);
		plane.setPosition(sf::Vector2f(360, 820));
		window.draw(plane);

        window.display();
    }

    return 0;
}