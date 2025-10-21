#include "jogador.h"
#include "historia.h"


int main(){
    std:: string name;
    historia historia1;
    name = historia1.iniciar();
    jogador jogador1(name, 100 , 1, 1, 0);
    jogador1.status();

    return 0;
}