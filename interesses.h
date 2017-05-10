#ifndef INTERESSES_H
#define INTERESSES_H

#include <iostream>
#include <string>

#include "listaatv.h"

using namespace std;

class interesses
{
    ListaAtv *prim;

    int tam;
    int posLivre;
    string *vet;

    public:
        interesses();
        void listar();
        void incluir(string a);
        void excluir(string a);
        virtual ~interesses();
};

#endif // INTERESSES_H
