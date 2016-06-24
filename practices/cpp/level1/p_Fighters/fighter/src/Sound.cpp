#include "Sound.h"
sf::Music Sound::backmusic;
sf::Music Sound::enemyfall;
void Sound::loadmusic()
{
	backmusic.openFromFile("backmusic.wav");
	enemyfall.openFromFile("fall.ogg");
}
