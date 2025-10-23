#include "jogador.h"
#include "historia.h"
#include "lobby.h"
// main == lobby

int main(){
    std:: string name;
    std:: string reposta_lobby;
    std:: string mapa;

    //historia historia1;
    //name = historia1.iniciar();
    //jogador jogador1(name, 100 , 1, 1, 0);
   // historia1.system_inicio();
    lobby lobby1;
    while(true){
         mapa = lobby1.lobby_tv_time();

        if (mapa == "1"){
            std::cout << "indo pra o show";
        } 
        else if (mapa == "2"){
            std::cout << "indo pra a loja";
        }
        else if (mapa == "3"){
            std::cout << "voce nao pode sair";
        }
        else if (mapa == "4"){
            std::cout << "tchau";
            std::exit(1);
        }

    }
   
    

   
    return 0;
}