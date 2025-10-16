#include "jogador.h"

using namespace std;
int main(){
    std::string nome;
    std:: string resp;

    while (resp != "sim")
    {
        std:: cout << "Ola viajante" << std:: endl;
        std:: cout << "Qual seu nome?"<< std:: endl;
        std:: cout << ""<< std:: endl;
        cin >> nome; 
        std:: cout << ""<< std:: endl;
        std:: cout << "ola" << nome<< std:: endl;
        std:: cout << ""<< std:: endl;
        std:: cout << "esta pronto para a jornada?<< std:: endl";
        std:: cout << ""<< std:: endl;
        cin >> resp; 
    }
    std:: cout << "Iniciar jornada!"<< std:: endl;
    

    

    return 0;
}