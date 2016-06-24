#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Texture.h"
#include "Scene.h"
#include "Sound.h"
#include "MyPlane.h"
int main()
{
	Texture::load();
	Sound::loadmusic();
	Scene* scene=Scene::getInstance();
	sf::RenderWindow* window=scene->getWindow();
	window->setVerticalSyncEnabled(true);
	window->setFramerateLimit(240);
	MyPlane myplane;
	scene->add(&myplane);
	scene->addMyplane(&myplane);
    Sound::backmusic.setLoop(true);
	Sound::backmusic.play();

    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                window->close();
            }
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                myplane.left();
            }
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                myplane.right();
            }
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                myplane.up();
            }
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                myplane.down();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) {
                myplane.fire();
            }
        }
		scene->display();
	}
    return 0;
}
