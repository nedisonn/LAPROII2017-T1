#ifndef CONTATOS_H
#define CONTATOS_H

#include <iostream>
#include <string>
using namespace std;

#include "pessoa.h"
class contatos{
    string nome;
    interesses *C; // VetDinInteresses C;
    pessoa *Amigos; // VetDinPessoa *A;
    pessoa *Prox;

    int tam;
    int posLivre;
    string *vet;

    public:
        contatos();

        void listar();
        void incluir(string a);
        void excluir(string a);
        virtual ~contatos();
        string getNome();
        string getDado(int i);
        int qtdDados();

    protected:

    private:
};

#endif // CONTATOS_H
