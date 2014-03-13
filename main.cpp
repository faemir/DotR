#include <libtcod/libtcod.hpp>
#include "game.hpp"
#include "creature.hpp"
#include "world.hpp"

Game game;

int main(int argc, char **argv) {
    game.display();
    TCODConsole::flush();
    while ( !TCODConsole::isWindowClosed() ) {
        game.update();
        game.display();
        TCODConsole::flush();
    }
    return 0;
}