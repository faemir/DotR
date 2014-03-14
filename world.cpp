#include "world.hpp"
#include "game.hpp"
#include "nodeCallBack.hpp"

World::World(int width, int height) : 
    width(width), height(height){
        createTiles(width, height);
//         genRoom(4,4,15,15);
//         genRoom(11,31,7,6);
//         genRoom(15,25,10,5);
    }
    
void World::genLevel(){
    level = new TCODBsp(0,0,width,height);
    level->splitRecursive(NULL,4,5,5,1.5f,1.5f); //no random || 4 recursion || 5 minH || 5 minW || 1.5f rectangles
    nodeCall = new NodeCallBack(*this);
    level->traversePostOrder(&nodeCall,NULL);
}

void World::genRoom(int startX, int startY, int width, int height){
    for (int i=startX; i<width+startX; i++)
        for (int j=startY; j<height+startY; j++)
            tiles[i][j].passable = true;
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
