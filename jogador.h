#pragma once
#include <iostream>

class jogador{

private:

    std:: string nome;
    int hp;
    int atk;
    int def;
    int nivel;
    int classe;

public:

    jogador( std::string nome, int hp,int atk, int def, int nivel, int classe);

    void status();

    std::string getNome();
};
