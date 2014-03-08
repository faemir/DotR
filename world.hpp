#include <libtcod/libtcod.hpp>
#include <string>

struct tile {
public:
    int sizeX;
    int sizeY;
    bool passable;
    std::string type;
};

class World {
public:
    int width;
    int height;
    TCODColor ground;
    TCODColor wall;
    
    World(int width, int height);
    void place();
    void createTiles(int posX, int posY);
    void createWall(int x, int y);
    tile *tiles;
};
