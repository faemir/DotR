#include "libtcod/libtcod.hpp"
#include "world.hpp"

World::World(int width, int height) : 
    width(width), height(height){
        TCODColor ground(31,31,31);
        TCODColor wall(213,213,213);
        TCODConsole::root->setDefaultBackground(ground);
        TCODConsole::root->setDefaultForeground(wall);
    }
    
void World::createWall(int posX, int posY)
{
    walls = new Wall;
    walls->posX = posX;
    walls->posY = posY;
}

void World::place(){
    //FIXME make this actually work...
//     for (int i=0; i<=width; i++)
//         for (int i=0; i<height; i++)
//             if (unpassable))
//                 TCODConsole::root->setCharBackground(x,y, wall);
//             else
//                 TCODConsole::root->setCharBackground(x,y, ground);
}
