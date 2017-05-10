#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>

#include "contatos.h"
#include "interesses.h"
#include "menu.h"
#include "listaatv.h"
#include "pessoa.h"

using namespace std;

int main(){
    contatos B;
    interesses C;
    menu A;
//declara listas
A.contats();
A.inters();
//chama menu
A.login();
C.incluir("A");
cout << "oi" << endl;
//OBJMenu.opcao() = login();


return 0;
}
