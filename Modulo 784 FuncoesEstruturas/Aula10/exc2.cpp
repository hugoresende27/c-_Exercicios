/*
Escreva um programa para calcular (usando uma função) o comprimento da string (array char) usando um apontador
*/
#include <iostream>	
		
using namespace std;

int tamStr(char *pt){
    int cont=0;
    int i=0;
    while (*(pt+i) != '\0'){ //enquanto o ponteiro onde aponta for diferente de \0, o fim da string
        cont ++;//incrementa contador
        i++;//movimenta o i 1 posição para a frente
    };
     
    return cont-1;
}

int tamStr2(char *pt){
    int cont=0;
    while (*pt){ 
        cont ++;
        *pt++;
    };
     
    return cont-1;
}


int main()								
{
    char palavra[100];
    char *apont = palavra;
    cout << "Palavra --> ";
    
    fflush(stdin);
    fgets(palavra, 100, stdin);

    cout << palavra<<endl;
    cout <<"TAMANHO--> "<< tamStr(apont) <<endl;
    cout <<"TAMANHO2--> "<< tamStr2(apont) <<endl;
    

    system("pause");				
	return 0;	
}