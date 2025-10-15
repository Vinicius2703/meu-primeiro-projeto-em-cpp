#pragma once
#include <iostream>

class jogador{

private:

    std:: string nome;
    int hp;
    int atk;
    int def;
    int nivel;

public:

    jogador( std::string nome, int hp,int atk, int def, int nivel);

    void status();

};
