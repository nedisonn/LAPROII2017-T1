#include "listaatv.h"

ListaAtv::ListaAtv()
{
    //ctor
}

ListaAtv::~ListaAtv()
{
    //dtor
}

 void ListaAtv::LerDoc(){
    
    int i;
    ifstream arq;
    arq.open( "atividades.txt" , ios::out);
	if (!arq.is_open())
		break;
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
                };
    arq.close();
 }
