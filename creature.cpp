#include <libtcod/libtcod.hpp>
#include "creature.hpp"

Creature::Creature(int posX, int posY, int symbol, const TCODColor &colour) :
    posX(posX), posY(posY), symbol(symbol), colour(colour){
}

void Creature::place(){
    TCODConsole::root->setChar(posX, posY, symbol);
}

void Creature::changeHP(int change)
{
    health = health+(change);
}

