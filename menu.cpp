#include <iostream>
#include <string>

#include "menu.h"
#include "pessoa.h"
#include "listaatv.h"

using namespace std;

void menu::login(){
    int aux;
    string aux1;
    cout <<"Escolha o usuario"<< endl<< "1 - Chuck Norris" << endl << "2 - Jackie Chan"<< endl<< " 3 - Bruce Lee" <<endl<< "4 - Tony Jaa" << endl << "5 - Sammo Hung" << endl;
    cin >> aux;
    if (aux == 1)
        aux1 = "Chuck Norris"
        else if (aux == 2)
            aux1 = "Jackie Chan"
               else if (aux == 3)
                   aux1 = "Bruce Lee"
                    else if (aux == 4)
                        aux1 = "Tony Jaa"
                        else if (aux == 5)
                            aux1 = "Sammo Hung"
                            else
                              aux1 = "Erro"
    cout << "O escolhido usuario foi:" << aux1 <<endl;
    int i;
    ifstream arq;
    arq.open( "rede.txt" , ios::out);
	if (!arq.is_open())
		return 0;
            else{
                    while (!arq.eof()){
                                        for (i = 0; i < 8; i++){
                                                                    if (!arq.eof())
                                                                    {
                                                                        getline(arq,Vetor[i]);
                                                                        cout << Vetor [i] << endl;
                                                                    }
                                                                };
                                      }
                }

}
        void menu::logout(){


        }

        void menu::exportar(){


        }
        void menu::finalizar(){

        }
        void menu::opcao(){


        }

        void menu::contats(){
            pessoa P;


        }

        void menu::inters(){
        ListaAtv A;

        }
menu::menu()
{


}

menu::~menu()
{
    //dtor
}
