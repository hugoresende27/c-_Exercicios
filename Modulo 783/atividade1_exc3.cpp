#include <iostream>					
using namespace std;


int main()								
{
    int vet[3];
    printf ("Insira o valor para a posição 0:: ");
    scanf ("%d",&vet[0]);
    printf ("Insira o valor para a posição 1:: ");
    scanf ("%d",&vet[1]);
    printf ("Insira o valor para a posição 2:: ");
    scanf ("%d",&vet[2]);

    if ( vet[0] > vet[1] && vet[0] > vet[2])
    {
        cout << "O maior é o " << vet[0] <<endl;
    }
    else if ( vet[1] > vet[2] && vet[1] > vet[0])
    {
        cout << "O maior é o " << vet[1] <<endl;
    }
    else if ( vet[2] > vet[1] && vet[2] > vet[0])
    {
        cout << "O maior é o " << vet[2] <<endl;;
    }
    else 
    {
        cout << "Existem valores iguais\n";
    }   
    
    
    system("pause");				
	return 0;	
}