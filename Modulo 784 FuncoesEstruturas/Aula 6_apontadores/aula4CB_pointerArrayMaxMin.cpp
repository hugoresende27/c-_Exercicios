#include <iostream>	
#include <string.h>
#include <math.h>		
#define MAX 5
using namespace std;

void maxiMin(int *vet, int*min , int*max){
    // int m=*(vet);
    // int min = *(vet);
    
    for (int i=0; i<MAX;i++){
        if (*(vet+i)>*max){
            *max = *(vet+i);
        } 
        if (*(vet+i)<*min){
            *min = *(vet+i);
        }
    }
}

int main()								
{
    int arrayB[MAX];

    //////////////////////////////////////////////////
    for (int i=0; i<MAX;i++){
        cout << "\tINDEX "<<i<<" :: ";
        cin >> *(arrayB+i);
    }
    int mi=arrayB[0];
    int ma=arrayB[0];
    //////////////////////////////////////////////////
    for (int i=0; i<MAX;i++){
        cout << *(arrayB+i) << " | ";
    }

    maxiMin(arrayB,&mi,&ma);
    cout <<"Min:: "<< mi << "\t" << "Max::" <<ma;//aqui vars mi e ma receberam valores apontados pela função

    cout << endl;
    system("pause");				
	return 0;	
}