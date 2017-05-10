#include "pessoa.h"
using namespace std;

pessoa::pessoa()
{
    //ctor
}

pessoa::~pessoa()
{
    //dtor
}

        void pessoa::lerDoc(){
    int i;
    ifstream arq;
    arq.open( "contatos.txt" , ios::out);
	if (!arq.is_open())
		return 0;
            else{
                while (!arq.eof()){
                    for (i = 0; i < 4; i++){
                            if (!arq.eof())
                            {
                                getline(arq,nome[i]);
                                cout << nome [i] << endl;
                            }
                                            };
                                    }
                }
            arq.close();

}
