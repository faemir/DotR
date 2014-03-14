#include "nodeCallBack.hpp"
#include "world.hpp"

NodeCallBack::NodeCallBack(World& world) : world(world)
{

}

bool NodeCallBack::visitNode(TCODBsp* node, void* userData){
    if (node->isLeaf()){
        world.genRoom(4,4,15,15);
    }
    return true;
};