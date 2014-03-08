struct Wall {
public:
    int posX;
    int posY;

};

class World {
public:
    int width;
    int height;
    TCODColor ground;
    TCODcolor wall;
    
    World(int width, int height);
    void place();
    void createWall(int posX, int posY);
    Wall *walls;
};

