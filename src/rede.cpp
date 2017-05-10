#include "rede.h"

rede::rede()
{
    //ctor
}

rede::~rede()
{
    //dtor
}
void rede::LerDoc(){

    int i;
    ifstream arq;
    arq.open( "rede.txt" , ios::out);
	if (!arq.is_open())
		break;
            else{
                while (!arq.eof()){
                    for (i = 0; i < 8; i++){
                            if (!arq.eof())
                            {
                                if (Vetor[i] != "#")
                                    getline(arq,Vetor[i]);
                                if (Vetor[i] == #)
                                    getline(arq,Vetor[i++]);
                                cout << Vetor [i] << endl;
                                if ("-" ==find("-",0))
                                Vetor[i].erase(0)
                                Vetor[i].erase(0)

                                cout << Vetor [i] << endl;
                            }
                                            };
                                    }
                };
    arq.close();
 }
