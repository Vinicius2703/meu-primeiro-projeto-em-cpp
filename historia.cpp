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
    print("\n\nTenna: E estamos aqui com nosso convidado estreando pela primeira vez no TV TIME!!!!\n\n", 50);
    dalay(1000);
    print("====== APLAUSOS ====== \n\n", 10);
    print("Tenna: E para nosso primeiro desafio, preparamos algo muito especial!!\n\n", 50);
    dalay(1000);
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
    print("Tenna: Seu primeiro teste eh um QUIZ PASSA OU REPASSA!!!!\n", 50);
    dalay(1000);
    print("Tudo que voce precisa fazer eh responder 5 perguntas.\n", 50);
    dalay(1000);
    print("Parece simples, nao eh??.\n\n", 50);
    dalay(1000);
    print("Tenna: Se voce ganhar, voce passa para o proximo desafio.\n", 50);
    dalay(1000);
    print("E se perder...\n", 50);
    dalay(2000);
    print("VOCE MORRE.\n\n", 300);
    dalay(1000);
    print("System: Pessoal, aqui no 'TV TIME', a gente adora um drama, mas nao a VIOLENCIA!.\n", 10);
    dalay(100);
    print("NOSSOS DESAFIOS NAO TOLERAM NENHUM TIPO DE BRIGA! Mantenha suas maos longe do botao de ataque (e do dial do meu monitor!).\n", 10);
    dalay(100);
    print("Traga a sua inteligencia, seu charme... e quem sabe um dinheirinho para a lojinha de presentes, temos brindes exclusivos na loja por apenas 2.99.\n", 10);
    dalay(100);
    print("Afinal, eu tenho que pagar a conta de luz!.\n\n", 10);
    dalay(1000);
    print("Tenna: Sintonize-se! Se nao for divertido, o Mr. Tenna promete devolver o seu...", 50);
    dalay(2000);
    print("Tempo.\n\n", 50);
    dalay(1000);
    print("Tenna: Enfim.\n", 50);
    print("Tenna: Agora, irei chamar seu concorrente!!\n\n", 50);
    dalay(1000);
    print("=== SUSPENSE === \n\n", 150);
    print("Tenna: Seu concorrente eh...\n\n", 100);
    dalay(1000);
    print("System: SPANTOM \n\n", 100);
    dalay(1000);
    print("Tenna: SPANTOM?!!! \n\n", 10);
    dalay(1000);
    print("Spantom: HEY HEY HEY!!! OLÁ MEU [[$$CLIENTE EM POTENCIAL$$]] \n", 10);
    print("Spantom: HEY HEY HEY!!! OLÁ MEU [[$$CLIENTE EM POTENCIAL$$]] \n", 10);


    
    return a;
}