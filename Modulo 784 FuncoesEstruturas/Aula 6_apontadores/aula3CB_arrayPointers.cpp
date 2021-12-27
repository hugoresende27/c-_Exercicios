#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

int main()								
{
    int lucky [5] = {2,3,5,7,9};
    cout << lucky;              //imprime o endereço do primeiro elemento do array
    cout <<"\t"<<&lucky[0];     //imprime o endereço do primeiro elemento do array

    cout << "\n"<< lucky[2];    //imprime o index [2] do vetor lucky
    cout << "\t"<< *(lucky+2);  //imprime o index [2] do vetor lucky

///////////////////////////////////////////////////////
    cout << endl;
    int arrayB[5];
    //////////////////////////////////////////////////
    for (int i=0; i<5;i++){
        cout << "\tINDEX "<<i<<" :: ";
        cin >> *(arrayB+i);
    }
    //////////////////////////////////////////////////
    for (int i=0; i<5;i++){
        cout << *(arrayB+i) << " | ";
    }
    cout << endl;
    system("pause");				
	return 0;	
}