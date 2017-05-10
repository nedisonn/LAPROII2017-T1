#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <istream>

using namespace std;
int main(){
    string Vetor[9];
    int i;
    ifstream arq;
    arq.open( "atividades.txt" , ios::out);
	if (!arq.is_open())
		return 0;
    else{
        for (i = 0; i < 8; i++){
            getline(arq,Vetor[i]);
            cout << Vetor [i] << endl;
            };
        }
return 0;
}
