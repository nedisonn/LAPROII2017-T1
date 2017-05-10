
#include <iostream>
using namespace std;
#include "interesses.h"

interesses::interesses()
{
    //ctor
}



        void interesses::listar(){

            string *temp;
            if(posLivre < tam)
            {
                vet[posLivre] = dado;
                posLivre++;
            }
            else{
                cout << endl << "...alocando mais espaco no vetor" << endl;
                temp = new string[tam+1];// cria uma nova �rea
                for(int i=0; i< tam; i++)
                {   // copia os dados para a nova �rea
                    temp[i] = vet[i];
                }
                delete vet; // libera a �rea antiga
                vet = temp; // faz o vet apontar para nova �rea
                tam = tam + 1;
                vet[posLivre] = dado;
                posLivre++;

        }
        void interesses::incluir(string a){

        }
        void interesses::excluir(string a){

        }
interesses::~interesses()
{
    //dtor
}
