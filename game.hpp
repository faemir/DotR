#include "creature.hpp"
#include "world.hpp"

class Game {
public:
    int width;
    int height;
    Creature* player;
    World* map;
    
    Game();
    void update();
    void display();
    
};