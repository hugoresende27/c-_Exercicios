#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

int main()								
{

    int size;
    cout << "SIZE:: ";
    cin >>size;
    //int myArray[size];//NÃO FUNCIONA PORQUE O TAMANHO DO ARRAY TEM DE ESTAR DEFINIDO ANTES DE INICIAR O PROGRAMA
    // existe NEW e DELETE allocate 
    int * myArray = new int [size];//assim funciona, o size é armazenado no apontador e new int [] cria objeto array
    ///////////////////////////////////////////////
    for (int i=0; i<size;i++){
        cout << "array ["<<i<<"] ->";
        cin >> myArray[i];
    }
    ///////////////////////////////////////////////
    for (int i=0; i<size;i++){
        //cout << myArray[i]<<" |"; 
        cout << *(myArray+i) <<" # "; 
    }

    //NO FIM PRECISO DE DEALLOCATE A MEMÓRIA, COM DELETE
    delete[]myArray;
    //para o array apontar para um espaço NULL da memória
    myArray=NULL;

    cout << endl;
    system("pause");				
	return 0;	
}