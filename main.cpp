#include "jogador.h"
#include "historia.h"
// main == lobby

int main(){
    std:: string name;
    std:: string reposta_lobby;

    historia historia1;
    name = historia1.iniciar();
    jogador jogador1(name, 100 , 1, 1, 0);
    historia1.system_inicio();

    while(reposta_lobby != "5"){
        std:: cout << " " << std:: endl;
        std:: cout << "==== Lobby TV TIME  ====" << std:: endl;
        std:: cout << " " << std:: endl;
        std:: cout << "system: Para onde voce quer ir? " << std:: endl;
        std:: cout << " " << std:: endl;
        std:: cout << "[ 1 ] - Show TV TIME " << std:: endl;
        std:: cout << "[ 2 ] - Meu Camarim " << std:: endl;
        std:: cout << "[ 3 ] - Loja TV TIME " << std:: endl;
        std:: cout << " " << std:: endl;
        std:: cout << " " << std:: endl;

    }

    return 0;
}