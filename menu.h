#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

#include "contatos.h"
#include "interesses.h"
using namespace std;

class menu
{
    public:
        void contats(); // le a lista geral de contatos
        void inters(); // le a lista geral de interesses
        void login(); //carrega lista especifica
        void opcao();
        void logout();
        void exportar();
        void finalizar();
        menu();
        virtual ~menu();

};

#endif // MENU_H
