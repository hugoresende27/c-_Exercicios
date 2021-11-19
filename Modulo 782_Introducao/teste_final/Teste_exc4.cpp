#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char str1 []= "Boa";
    char str2 []= "Sorte";

    cout<< "Programa concatenar 2 strings\n";
    strcat(str1," ");                   //concatenção com o espaço
    strcat(str1,str2);                  //concatenação str1 + str2
    cout<<str1;
    printf("\nO tamanho da frase é %d \n",strlen(str1) );

    system("pause");
	return 0;
}
