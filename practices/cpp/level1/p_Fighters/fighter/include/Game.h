#ifndef GAME_H
#define GAME_H
#include <random>
#include <ctime>
class Game{
public:
    static Game* getInstance();
    static std::default_random_engine random_engine;
private:
    static Game* instance;
};
#endif // GAME_H
