#pragma once
#include "Collider.h"
#include "Material.h"

class Alien;
class Bullet;

class Shield : public Collider {
    float pos_x; //Posic��o do canto inferior esquerdo no eixo XX
    float pos_y; //Posic��o do canto inferior esquerdo no eixo YY
    bool life; //O Shield vive? se True a fun��o Draw deve ser realizada;
    int _numlifes; //Number of lifes
    Material _mat;

public:
    Shield(); //Construtor por omiss�o, posic��o inicial 0,0
    Shield(float xx, float yy); //Construtor especifico, posi��o inicial xx,yy
        //Fun��o de desenho

    float getPosX() { return pos_x; }; //Getters
    float getPosY() { return pos_y; }; //Getters
    bool getLife() { return life; } //Getters

    void draw();
    float getMargin();

    std::vector<Bullet*> bulletPointer();
    bool colide(Bullet* bullet);
    bool colide(Alien* alien);
};