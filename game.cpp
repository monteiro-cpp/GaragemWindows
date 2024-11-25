#include <iostream>
#include <Windows.h>

struct Carro {
    std::string nome;
    std::string cor = "Cinzento";
};

void funcs();

int dinheiro = 50;
int cavalos = 50;

int main() 
{
    
    while (true) {
        system("title Garagem");
        std::cout << "Dinheiro - " << dinheiro << std::endl;        
        std::cout << "\n1. Pintar o carro \n";
        std::cout << "2. Aprimorar cavalos\n";
        std::cout << "3. Trabalhar\n"; 
        std::cout << "4. Info\n\n";
        funcs();
    } 

}

void funcs() {

    Carro carrinho;

    std::string chc;
    std::cout << "> ";
    std::cin >> chc;
    
    if (chc == "1") { // pintura

        std::string NovaCor;       
        std::cout << "\nQual vai ser a cor nova do carro?\n\n";
        std::cout << "1. \033[35mRoxo\033[0m\n";
        std::cout << "2. \033[38;5;214mLaranja\033[0m\n";
        std::cout << "3. \033[31mVermelho\033[0m\n\n";

        std::cout << "> ";
        std::cin >> NovaCor;

        if (NovaCor == "1") {
            system("cls");
            std::cout << "A nova cor do teu carro e \033[35mroxo\033[0m.\n";
            carrinho.cor = "Roxo";
        } 
        else if (NovaCor == "2") {
            system("cls");
            std::cout << "A nova cor do teu carro e \033[38;5;214mlaranja\033[0m.\n";
            carrinho.cor = "Laranja";
        } 
        else if (NovaCor == "3") {
            system("cls");
            std::cout << "A nova cor do teu carro e \033[31mvermelho\033[0m.\n";
            carrinho.cor = "Vermelho";
        } else {
            system("cls");
            std::cout << "\n\nOpção inválida.\n";
        }

    }

    else if (chc == "2") { // cavalos
        if (dinheiro < 30) {
            std::cout << "\033[31m[ERRO]\033[0m Tu nao tens dinheiro suficiente. Custo - 30\n";
            Sleep(2222);
            system("cls");
        } else {
            dinheiro -= 30;
            cavalos += 30;
            std::cout << "O teu carro agora tem " << cavalos << " cavalos" << std::endl;
            Sleep(2222);
            system("cls");
        }
    } 

    else if (chc == "3") {
        int vezes;
        std::cout << "Trabalho: Minerador.\n";
        std::cout << "Queres minerar quantas vezes? (int) > ";
        std::cin >> vezes;
        system("cls");

        for (int i = 0; i < vezes; i++) {
            system("pause");
            dinheiro += 7;
            std::cout << "Estas com " << dinheiro << "$" << std::endl;
        } system("cls");
    } 

    else if (chc == "4") {
        std::cout << "\n\nCOR: [" << carrinho.cor << "]\n";
        std::cout << "CAVALOS: [" << cavalos << "]\n\n";
    }  
}



