#include <libtcod/libtcod.hpp>
#include "game.hpp"

Game game;

int main(int argc, char **argv) {
    while ( !TCODConsole::isWindowClosed() ) {
        game.update();
        game.display();
        TCODConsole::flush();
    }
    return 0;
}