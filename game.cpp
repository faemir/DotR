#include <libtcod/libtcod.hpp>
#include "game.hpp"

Game::Game()
{
    TCODConsole::initRoot(50, 30, "DotR - Defence of the Roguelike", false, TCOD_RENDERER_SDL);
    TCODConsole::setWindowTitle("DotR - Defence of the Roguelike");
    player = new Creature(25, 15, '@', TCODColor::white);
    map = new World(50, 30);
}

void Game::update(){
    TCOD_key_t key = TCODConsole::waitForKeypress(true);
    switch(key.vk) {
        case TCODK_UP : player->posY--;
            break;
        case TCODK_DOWN : player->posY++;
            break;
        case TCODK_LEFT : player->posX--;
            break;
        case TCODK_RIGHT : player->posX++;
            break;
    }
}

void Game::display(){
    TCODConsole::root->clear();
    
    map->place();
    player->place();
    //ADD display monsters too!
}