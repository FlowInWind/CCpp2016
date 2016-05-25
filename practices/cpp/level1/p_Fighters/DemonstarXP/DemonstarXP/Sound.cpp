#include "Sound.h"
sf::Music Sound::backmusic;
void Sound::loadmusic()
{
	backmusic.openFromFile("001.ogg");
}