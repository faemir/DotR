#include <libtcod/libtcod.hpp>
#include "world.hpp"
class NodeCallBack : public ITCODBspCallback {
private:
    World &world;
public :
    NodeCallBack(World &map);
    bool visitNode(TCODBsp *node, void *userData);     
};