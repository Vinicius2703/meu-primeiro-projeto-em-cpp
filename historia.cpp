#include "historia.h"
#include <iostream>
#include <chrono>
#include <thread>

void dalay(int milliseconds){
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
};

void historia::iniciar(){
    // variaveis
    std::string nome;
    std:: string resp;

    std:: string ola = "Ola, viajante!";
    std:: string pergunta = "Qual seu nome?";

    for (char i : ola){
        std::cout << i << std:: flush;
        dalay(100);
    }
    dalay(1000);
    std:: cout << " " << std:: endl;
    
    for (char i : pergunta){
        std::cout << i << std:: flush;
        dalay(100);
    }


}