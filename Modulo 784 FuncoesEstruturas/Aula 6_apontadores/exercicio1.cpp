/*passar um char por referencia a uma função e imprimir se o char recebido é maiusculo ou minusculo*/

#include <iostream>	
		
using namespace std;

void maisMins(char *a){
    if (isupper(*a)){
        cout << "É MAIUSCULA!\n";
    } else {
        cout << "É minuscula!\n";
    }
    printf ("Endereco memoria %p \n",a);
    *a = 'Z';
}

void mai_min (char *c){
    if ((int)*c >=65 && (int)*c <=90){
        cout << "É MAIUSCULA!\n";
    } else {
         cout << "É minuscula!\n";
    }
}

int main()								
{
    char letra;
    char *ptr;
    ptr = &letra;
    cout << "Insira a letra :: ";
    cin >> letra;
    printf ("Endereco memoria %p \n",&letra);
    
    maisMins(ptr);
    cout << "#######################################\n";
    maisMins(&letra);
    cout << "#######################################\n";
    mai_min(&letra);
    cout << "#######################################\n";
    printf ("a letra agora é %c \n",letra);
    system("pause");				
	return 0;	
}