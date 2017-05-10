#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <istream>


using namespace std;
const int MAX = 10;

int main(){
    string Vetor[MAX];
    string aux;
    int i, am, am1,intaux; //am = final dos interesses e comeco dos amigos
    ifstream arq;


//if (intaux == 1)







i = 0;
aux = "-";


    arq.open( "rede.txt" , ios::out);
	if (!arq.is_open())
		return 0;
            else{
                while (!arq.eof()){
                                
                            while(!arq.eof())
                            {   
                                while (i < MAX){
                                getline(arq,Vetor[i]);
                                
                                           // cout << i << endl;
                                if (0 == Vetor[i].find_first_of("#",0)){
                                    Vetor[i].erase();
                                    arq.close();}

                                
                                        //    cout << Vetor[i] << endl;
                         
                                  /*  if (0==Vetor[i].find_first_of(aux,0)){
                                    am = i;}*/
                                    
                                         //  cout << am<< endl;
                                    if (0 == Vetor[i].find("-",0)){
                                    Vetor[i].erase(0,3);
                                    am1++;
                                    ;}
                                    
                                           //cout << Vetor[i] << endl;
                                        i++;
                                        
                            }}
                                                        }
                                   am = i - am1;
                                           cout << am << endl;
             cout << am1 << " amigos: " << endl;
                


                i = am;
                while (i<MAX){

                cout << Vetor[i] << ", " << endl;
                if (0 == Vetor[i].find("\n",0)) break;
                
                i++; 
                }
                cout << "." << endl;
    if (arq.eof())
        arq.close();
            }

return 0;
}
