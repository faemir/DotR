#include "nodeCallBack.hpp"
#include "world.hpp"
bool NodeCallBack::visitNode(TCODBsp* node, void* userData){
    if (node->isLeaf()){
        world.genRoom(4,4,15,15);
    }
    return true;
};