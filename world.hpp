#include <libtcod/libtcod.hpp>
#include <vector>
#include "nodeCallBack.hpp"
struct tile {
public:
    bool passable = false;
};

class World {
public:
    int width;
    int height;
    TCODColor ground;
    TCODColor wall;
    TCODBsp *level;
    NodeCallBack *nodeCall;
    
    World(int width, int height);
    void place();
    void createTiles(int posX, int posY);
    void createWall(int x, int y);
    void genLevel();
    void genRoom(int startX, int startY, int width, int height);
    bool wallCheck(int x, int y);
    std::vector<std::vector<tile> > tiles;
};

