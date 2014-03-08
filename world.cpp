#include "libtcod/libtcod.hpp"
#include "world.hpp"

World::World(int width, int height) : 
    width(width), height(height){
        createTiles(width, height);
        createWall(5,5);
        createWall(5,6);
        createWall(5,7);
        createWall(5,8);
        createWall(5,9);
        createWall(5,10);
        createWall(5,11);
    }
    
void World::createTiles(int sizeX, int sizeY){
    tiles.resize(sizeY);
    for (int i = 0; i < sizeY; ++i)
        tiles[i].resize(sizeX);
}

void World::createWall(int x, int y){
    tiles[x][y].passable = false;
}

bool World::wallCheck(int x, int y)
{
    if (tiles[y][x].passable == false)
        return (false);
    else
        return (true);
}


void World::place(){
     for (int i=0; i<50; i++)
         for (int j=0; j<30; j++){
             if (tiles[j][i].passable == false)
                 TCODConsole::root->setCharBackground(i,j, TCODColor::darkerGrey);
             else
                 TCODConsole::root->setCharBackground(i,j, TCODColor::grey);
         }
}
