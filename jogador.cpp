#include "jogador.h"
#include <iostream>

jogador::jogador(std::string nome, int hp, int atk, int def, int nivel) : nome(nome), hp(hp), atk(atk), def(def), nivel(nivel){}


void jogador::status(){
    std::cout << "=== " << nome << " ===" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Nivel: " << nivel << std::endl;
    std::cout << "Vida: " << hp << std::endl;
    std::cout << "Ataque:" << atk << std::endl;
    std::cout << "Defesa: " << def << std::endl;
    
}
