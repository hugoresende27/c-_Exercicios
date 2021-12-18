/*
Elabore um programa que leia um valor do tipo inteiro e, por meio de função,
atualize todas as posições de um vetor com o número inteiro lido, depois imprima
os valores. Utilize ponteiros para as operações
*/

#include <iostream>	
#define MAX 5
using namespace std;


int fun1(int *pt_vet, int a){
    for (int i=0; i< MAX; i++){
        *(pt_vet+i)=a;
    }
}

int main()								
{
    int valor;
    int vet[MAX]={1,2,3,4,5};
    int *pt = vet;
    cout << "NUM:: ";
    cin>> valor;

    fun1(pt,valor);

    for (int i=0; i<MAX; i++){
        cout << vet[i]<< "| ";
    }
    system("pause");				
	return 0;	
}

/*
int main(){
	setlocale(LC_CTYPE, "Portuguese");
		
	int vetInf[MAX]={1,2,3,4,5}, numInf;
	
	int *ptrVet=vetInf;
		
	cout<<"Informe um número"<<endl;
	cin>>numInf;
	
	atualizaValor(ptrVet, numInf);
	
	for(int i=0; i<MAX; i++){
		cout<< vetInf[i]<< " ";
	}

    system("pause");	
	return 0;
}*/