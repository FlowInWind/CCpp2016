#ifndef SOUND_H
#define SOUND_H
#include <SFML/Audio.hpp>
class Sound{
public:
	static sf::Music backmusic;
	static sf::Music enemyfall;
	static void loadmusic();
};
#endif // SOUND_H
