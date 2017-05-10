#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
#include "interesses.h"
using namespace std;

class interesses;

class pessoa


{
    public:
        string nome[5];
        pessoa();
        void lerDoc();
        virtual ~pessoa();

};
#endif // PESSOA_H
