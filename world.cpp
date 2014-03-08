#include "libtcod/libtcod.hpp"
#include "world.hpp"

World::World(int width, int height) : 
    width(width), height(height){
        TCODColor ground = TCODColor::lighterAmber;
        TCODColor wall = TCODColor::cyan;
//         TCODConsole::root->setDefaultBackground(ground);
//         TCODConsole::root->setDefaultForeground(wall);
        createTiles(width, height);
        createWall(30,30);
//         createWall(15,15);
    }
    
void World::createTiles(int sizeX, int sizeY){
    tiles = new tile[sizeX * sizeY];
    tiles->sizeX = sizeX;
    tiles->sizeY = sizeY;
}

void World::createWall(int x, int y){
//     tiles[x*y].passable = false;
    tiles[x*y].type = "wall";
}

void World::place(){
    //FIXME this is the wrong colour
     for (int i=0; i<=width; i++)
         for (int j=0; j<height; j++){
             if (tiles[i*j].type == "wall")
                 TCODConsole::root->setCharBackground(i,j, TCODColor::lighterAmber);
             else
                 TCODConsole::root->setCharBackground(i,j, TCODColor::cyan);
         }
}
