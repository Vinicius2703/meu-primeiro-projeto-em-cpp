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

    std:: cout << "O";
    dalay(150);
    std:: cout << "l";
    dalay(100);
    std:: cout << "a";
    dalay(100);
    std:: cout << " ";

    std:: cout << "v";
    dalay(100);
    std:: cout << "i";
    dalay(100);
    std:: cout << "a";
    dalay(100);
    std:: cout << "j";
    dalay(100);
    std:: cout << "a";
    dalay(100);
    std:: cout << "n";
    dalay(100);
    std:: cout << "t";
    dalay(100);
    std:: cout << "e";
    dalay(100);
}