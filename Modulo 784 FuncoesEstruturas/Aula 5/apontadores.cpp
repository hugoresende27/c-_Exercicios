/*
Por que usar ponteiros?
Ponteiros são muito úteis quando uma variável tem que ser acessada em diferentes partes de um programa.
Neste caso, o código pode ter vários ponteiros espalhados por diversas partes do programa, “apontando” para a variável que contém o dado desejado.
Caso este dado seja alterado, não há problema algum, pois todas as partes do programa tem um ponteiro que aponta para o endereço onde reside o dado atualizado.
Existem várias situações onde ponteiros são úteis, por exemplo:
Alocação dinâmica de memória
Manipulação de arrays.
Para retornar mais de um valor em uma função.
Referência para listas, pilhas, árvores e grafos.
*/

#include <iostream>	
		
using namespace std;


int main()								
{
    int a;
    int b;
    int c;
    int *ptr;       //decl de um apontador
    int **ptr1; //ponteiro de ponteiro

    a= 90;
    b = 2;
    c= 3;
    ptr = &a;//endereço de memória da var a uso & para passar a referencia da posicao
    printf ("Valor de ptr %p, conteudo de ptr %d posicao memoria &a: %d &ptr: %d\n ", ptr, *ptr, &a, &ptr);//ptr = valor ptr endereco hexadecimal da posição de memória// *ptr = conteudo da var para onde o ptr está a apontar //&a &ptr enderecos de memoria
    printf ("B: %d, C: %d\n", b,c);
    printf ("A *ptr: %d\n", *ptr);
    printf ("A &ptr: %d\n", &ptr);
    printf ("A ptr: %d\n", ptr);
    cout<< "***************\n";
    ptr = &b;
    printf ("B *ptr: %d\n", *ptr);
    printf ("B &ptr: %d\n", &ptr);
    printf ("B ptr: %d\n", ptr);
    cout<< "***************\n";
    *ptr = c;
    printf ("C *ptr: %d\n", *ptr);
    printf ("C &ptr: %d\n", &ptr);
    printf ("C ptr: %d\n", ptr);
    cout<< "***************\n";
    ptr = &a;
    printf ("A *ptr: %d\n", *ptr);
    printf ("A &ptr: %d\n", &ptr);
    printf ("A ptr: %d\n", ptr);
    cout<< "***************\n";
    *ptr = 999;//alterar o valor da var a, apontador estava ptr = &a;
    printf ("A : %d\n", a);
    ptr = &c;
    *ptr = 500;
    printf ("C : %d\n", c);
    system("pause");				
	return 0;	
}