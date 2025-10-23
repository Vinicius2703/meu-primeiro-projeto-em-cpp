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

void pula_linha(){
    std:: cout << " " << std:: endl;
    std:: cout << " " << std:: endl;
}

std::string historia::iniciar(){

    // variaveis
    std::string nome;
    std:: string resp;


// as frases estao com delays, entao apliquei um for para aplicar um delay:
pula_linha();
print("Tenna: Ola meus caros telespectadores!!", 50);
dalay(1000); // isso aqui é uma pausa para a prox pagina
std:: cout << " " << std:: endl;

print("estamos iniciando mais um programa TV Time!!", 50);
dalay(1000); // isso aqui é uma pausa para a prox pagina
std:: cout << " " << std:: endl;

pula_linha();
print("====== APLAUSOS ====== ", 10);
dalay(1000); // isso aqui é uma pausa para a prox pagina
std:: cout << " " << std:: endl;
pula_linha();

print("Tenna: Estamos aqui com um convidado especial!", 50);
dalay(1000); // isso aqui é uma pausa para a prox pagina
std:: cout << " " << std:: endl;
print("pode me dizer qual eh o seu nome?", 50);
pula_linha();


    while (resp != "1"){
        
        std:: cout << " " << std:: endl;
        std:: cout << "Nome: ";
        std:: cin >> nome;

        std:: cout << " " << std:: endl;
        std:: cout << "Tem certeza desse nome? " << std:: endl;
        std:: cout << " " << std:: endl;
        std:: cout << "[ 1 ] sim " << std:: endl;
        std:: cout << "[ 2 ] nao " << std:: endl;
        std:: cout << " " << std:: endl;
        std:: cout << "Escolha: ";
        std:: cin >> resp;
        std:: cout << " " << std:: endl;

    }
    
    print("Tenna: Eh a sua hora de se tornar uma super estrela!!", 50);
    dalay(1000);
    std:: cout << " " << std:: endl;

    print("IT'S TV TIME!!!", 150);
    pula_linha();
    dalay(3000);

    return nome;
}

void historia::system_inicio(){

    print("Ola", 50);
    dalay(1000);
    std:: cout << " " << std:: endl; 

    print("System: Seja muito bem vindo ao lobby da TV TIME!", 50);
    std:: cout << " " << std:: endl; 
    print("Eh uma honra ter voce aqui", 50);
    dalay(1000); 
    pula_linha();
    print("System: Sinta-se a vontade para explorar quando quiser cada stage.", 50);
    std:: cout << " " << std:: endl; 
    print("Tenha um bom dia!", 50);
    pula_linha();
    
}

int historia::historia_showtime(int a, std::string nome){
    std::string resposta;
    dalay(1000);
    print("Tenna: E estamos aqui com nosso convidado estreando pela primeira vez no TV TIME!!!!\n\n", 50);
    print("====== APLAUSOS ====== \n\n", 10);
    print("Tenna: E para nosso primeiro teste, preparamos algo muito especial!!\n\n", 50);
    print("=== SUSPENSE === \n\n", 150);
    dalay(500);
    print("Tenna: voce esta pronto, ", 50);
    print(nome, 150);
    print("?\n\n", 150);

    std::cout << "[ 1 ] - Sim " << std:: endl;
    std::cout << "[ 2 ] - Nao \n" << std:: endl;
    std::cout << "Escolha: ";

    std::cin >> resposta;

    if(resposta == "1"){
        print("Tenna: vamos comecar!!\n\n", 50);
        dalay(500);
        print("====== APLAUSOS ====== \n\n", 10);
    }
    else{
        print("Tenna: NAO IMPORTA, VAMOS COMECAARR!!!\n\n", 10);
        print("====== APLAUSOS ====== \n\n", 10);
    }
    dalay(500);
    print("Tenna: Seu primeiro teste eh um QUIZ PASSA OU REPASSA!!!!\n\n", 50);
    print("====== APLAUSOS ====== \n\n", 10);

    return a;
}