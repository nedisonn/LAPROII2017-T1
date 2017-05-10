#include "contatos.h"

contatos::contatos()
{
    //ctor
}

contatos::~contatos()
{
    //dtor
}


        void contatos::listar(){

        }
        void contatos::incluir(string a){
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
        void contatos::excluir(string a){
            string *temp;
            for {i = 0; i < qtdDados(); i++){
            if (a == Vetor[i].find(a, 0)){
                delete Vetor[i];
                cout << endl << "...alocando menos espaco no vetor" << endl;
                temp = new string[tam-1];// cria uma nova �rea
                for(int i=0; i< tam; i++)
                {   // copia os dados para a nova �rea
                    temp[i] = vet[i];
                }
                delete vet; // libera a �rea antiga
                vet = temp; // faz o vet apontar para nova �rea
                tam = tam + 1;
            }
        }

        int qtdDados()
        {
             return posLivre;
        }
        int getDado(int i)
        {
            return vet[i];
        }
