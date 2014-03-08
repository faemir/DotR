class Creature {
public:
    int posX;
    int posY;
    int symbol;
    
    const TCODColor colour;
    
    Creature(int posX, int posY, int symbol, const TCODColor &colour);
    void place();
    void changeHP(int change);

protected:
    int health;
};