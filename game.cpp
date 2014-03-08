#include <libtcod/libtcod.hpp>
#include "game.hpp"

Game::Game()
{
    mapSizeX = 50;
    mapSizeY = 30;    
    TCODConsole::initRoot(mapSizeX, mapSizeY, "DotR - Defence of the Roguelike", false, TCOD_RENDERER_SDL);
    TCODConsole::setWindowTitle("DotR - Defence of the Roguelike");
    player = new Creature((mapSizeX / 2), (mapSizeY / 2), '@', TCODColor::white);
    map = new World(mapSizeX, mapSizeY);
}

void Game::update(){
    TCOD_key_t key;
    TCOD_mouse_t mouse;
    TCOD_event_t ev = TCODSystem::waitForEvent(TCOD_EVENT_ANY,&key,&mouse,true);
    if ( ev == TCOD_EVENT_KEY_PRESS && key.vk == TCODK_UP && map->wallCheck(player->posX, player->posY-1))
        player->posY--;
    else if ( ev == TCOD_EVENT_KEY_PRESS && key.vk == TCODK_DOWN && map->wallCheck(player->posX, player->posY+1))
        player->posY++;
    else if ( ev == TCOD_EVENT_KEY_PRESS && key.vk == TCODK_LEFT && map->wallCheck(player->posX-1, player->posY))
        player->posX--;
    else if ( ev == TCOD_EVENT_KEY_PRESS && key.vk == TCODK_RIGHT && map->wallCheck(player->posX+1, player->posY))
        player->posX++;
}

void Game::display(){
    TCODConsole::root->clear();
    map->place();
    player->place();
    //ADD display monsters too!
}