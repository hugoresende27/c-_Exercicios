/*
Faça um programa em C que possa armazenar as alturas de dez atletas de cinco
delegações que participarão dos jogos de verão. Imprimir a maior altura de cada
delegação
*/

#include <iostream>	
#define L 5
#define C 2	
using namespace std;


int main()								
{
    ////////////////////////////////INPUT DE VALORES NA  atletasRIZ///////////////////////////////////////
    float atletas[L][C];
    float melhores[L];
    float mel=0;
    
    for (int i=0; i<L; i++){
        cout << "\n**** DELEGAÇÂO "<<i+1<<" -> ";
        for (int j=0; j<C; j++){
            cout << "\tATLETA ["<<j+1<<"] :: ";
            cin >> atletas[i][j];
        }
    }
///////////////////////////////////////////////////////////////////


    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            cout << (atletas[i][j])<< " | ";
        }
        cout << endl;
    }
////////////////////////////////////melhor de cada linha

    for ( int i= 0; i<L; i++){
        mel=0;
        for (int j=0 ; j<C; j++){
            if(mel<=atletas[i][j]){
                mel=atletas[i][j];
            }
        }
        melhores[i]=mel;
    }
///////////////////////////////////////print do array com os melhores
    for (int i=0; i<L; i++){
        cout <<"DELEGAÇÂO "<<i+1<<" -> "<< melhores[i]<<endl;
    }
    system("pause");				
	return 0;	
}