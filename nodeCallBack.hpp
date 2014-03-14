#include <libtcod/libtcod.hpp>

class World;

class NodeCallBack : public ITCODBspCallback {
private:
    World &world;
public :
    NodeCallBack(World &map);
    bool visitNode(TCODBsp *node, void *userData);     
};
