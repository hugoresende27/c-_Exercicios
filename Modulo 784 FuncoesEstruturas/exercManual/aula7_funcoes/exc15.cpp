/*
Construa um programa em C que leia um caractere (letra) e, por meio de uma
função, retorne se este caractere é uma consoante ou uma vogal. Ao final imprima
o resultado.
*/


#include <iostream>	
		
using namespace std;

void conVog(char a){
    if (a == 'a' || a=='e' || a == 'i' || a=='o'||a=='u'){
        cout << "VOGAL ! ";
    }else{
        cout << "CONSOANTE !";
    }
}

int main()								
{
    char letra;
    do{
        cout << "LETRA? (s para sair)--> ";
        cin >> letra;
        tolower(letra);
        if (letra == 's') exit(0);
        conVog(letra);
        cout <<endl;
    }while (true);
    system("pause");				
	return 0;	
}