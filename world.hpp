#include <libtcod/libtcod.hpp>
#include <string>
#include <vector>

struct tile {
public:
    bool passable = true;
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
    bool wallCheck(int x, int y);
    std::vector<std::vector<tile> > tiles;
};
