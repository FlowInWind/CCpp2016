#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Texture.h"
#include "Sprite.h"
#include "Scene.h"
#include "Sound.h"
int main()
{
	Texture texture;
	texture.load();

	Scene* scene=new Scene;
	sf::RenderWindow* window=scene->getWindow();

	Sound::backmusic.play();


    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
			window->setFramerateLimit(240);
            if (event.type == sf::Event::Closed)
                window->close();
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left) {
                scene->left();
            }
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right) {
                scene->right();
            }
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Up) {
                scene->up();
            }
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Down) {
                scene->down();
            }
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space) {
                scene->down();
            }
        }

		scene->display();
	}
    return 0;
}