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
    std:: string frase1 = "eh a primeira vez que te vejo por aqui.";
    std:: string pergunta = "pode me dizer qual eh o seu nome?";
    std:: string pergunta1 = "";



// as frases estao com delays, entao apliquei um for para aplicar um delay:

// ola viajante ===============================
    for (char i : ola){
        std::cout << i << std:: flush; // a frase esta numa variavel que vai rodar com um delay de 50 miliseconds
        dalay(50); // isso acontece pra todo texto no bloco iniciar
    }

    dalay(1000); // isso aqui é uma pausa para a prox pagina
    std:: cout << " " << std:: endl;
// ===========================================

// ===========================================

    for (char i : frase1){
        std::cout << i << std:: flush;
        dalay(50);
    }
    dalay(1000);
    std:: cout << " " << std:: endl;
// ===========================================

    while (resp != "1"){
        for (char i : pergunta){
            std::cout << i << std:: flush;
            dalay(50);
        }
        std:: cout << " " << std:: endl;
        std:: cout << "Nome: ";
        std:: cin >> nome;

        std:: cout << " " << std:: endl;
        std:: cout << "Tem certeza desse nome? " << std:: endl;
        std:: cout << " " << std:: endl;
        std:: cout << "[ 1 ] sim " << std:: endl;
        std:: cout << "[ 2 ] nao " << std:: endl;
        std:: cout << " " << std:: endl;
        std:: cin >> resp;
        std:: cout << " " << std:: endl;

    }

}