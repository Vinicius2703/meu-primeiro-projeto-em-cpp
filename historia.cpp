#include "historia.h"
#include <iostream>
#include <chrono>
#include <thread>

void dalay(int milliseconds){
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
};

void print(std::string a, int b){
    for (char i : a){
        std::cout << i << std:: flush; // a frase esta numa variavel que vai rodar com um delay de 50 miliseconds
        dalay(b); // isso acontece pra todo texto no bloco iniciar
    }
}

std::string historia::iniciar(){
    // variaveis
    std::string nome;
    std:: string resp;


// as frases estao com delays, entao apliquei um for para aplicar um delay:

print("ola meus caros telespectadores!!", 50);
dalay(1000); // isso aqui é uma pausa para a prox pagina
std:: cout << " " << std:: endl;

print("estamos iniciando mais um programa TV Time!!", 50);
dalay(1000); // isso aqui é uma pausa para a prox pagina
std:: cout << " " << std:: endl;

print("=== APLAUSOS === ", 10);
dalay(1000); // isso aqui é uma pausa para a prox pagina
std:: cout << " " << std:: endl;

print("Estamos aqui com um convidado especial!", 10);
dalay(1000); // isso aqui é uma pausa para a prox pagina
std:: cout << " " << std:: endl;


    while (resp != "1"){
        print("pode me dizer qual é o seu nome?", 50);
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
    
    print("Tenna: Eh a sua hora de se tornar uma super estrela!!", 50);
    dalay(1000);
    std:: cout << " " << std:: endl;

    print("IT'S TV TIME!!!", 150);
    std:: cout << " " << std:: endl;
    std:: cout << " " << std:: endl;

    return nome;
}