#include "jogador.h"
#include "historia.h"
#include "mapas.h"
// main == lobby

int main(){
    std:: string name;
    std:: string reposta_mapa;
    std:: string mapa;

    historia historia1;
    name = historia1.iniciar();
    jogador jogador1(name, 100 , 1, 1, 0, 0);
    historia1.system_inicio();
    mapas mapa1;

    while(true){
         mapa = mapa1.lobby_tv_time();

        if (mapa == "1"){
            std::cout << "Tem certeza? \n\n"<< std::endl;

            std::cout << "[ 1 ] - Sim "<< std::endl;
            std::cout << "[ 2 ] - Nao \n\n"<< std::endl;

            std::cout << "Escolha: ";
            std::cin >> reposta_mapa;
            
            if (reposta_mapa ==  "1"){
                std::cout << "\n\n =========== indo pra o show ===========" << std::endl;
                historia1.historia_showtime(0,jogador1.getNome());
            } else{
                std::cout << "receba"<< std::endl;
            }


        } 
        else if (mapa == "2"){
            std::cout << "indo pra a loja\n\n";
        }
        else if (mapa == "3"){
            std::cout << "voce nao pode sair\n\n";
        }
        else if (mapa == "4"){
            std::cout << "tchau\n\n";
            std::exit(1);
        }

    }
   
    

   
    return 0;
}