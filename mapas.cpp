#include "mapas.h"
#include <iostream>

std::string mapas::lobby_tv_time(){

    std::string resposta_lobby;

     while(true){
        std:: cout << " " << std:: endl;
        std:: cout << "==== Lobby TV TIME  ====" << std:: endl;
        std:: cout << " " << std:: endl;
        std:: cout << "system: Para onde voce quer ir? " << std:: endl;
        std:: cout << " " << std:: endl;
        std:: cout << "[ 1 ] - Show TV TIME " << std:: endl;
        std:: cout << "[ 2 ] - Ver status " << std:: endl;
        std:: cout << "[ 3 ] - sair da TV TIME " << std:: endl;
        std:: cout << "[ 4 ] - sair do jogo\n\n" << std:: endl;
        std:: cout << "Escolha:  ";
        std:: cin >> resposta_lobby;
        
        if (resposta_lobby != "4" || resposta_lobby != "3" || resposta_lobby != "2" || resposta_lobby != "1"){
            break;
        }

    }
    return resposta_lobby;
};