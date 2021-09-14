#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

void testa();

int main()
{
    char nome[40];

    const char* locale = setlocale(LC_ALL, "portuguese-brazilian");// uma das tentativas
    char    xlocale[40];
    char*   local_original = xlocale;
    local_original = setlocale(LC_ALL, NULL);
    printf("\tLocale original: '%s'\n", local_original);
    printf("\tANSI Console CodePage: '%d'\n", GetACP());
    printf("\tConsole CP: '%d'\n", GetConsoleCP());
    int pagina_ocp = GetConsoleOutputCP();
    printf("\tConsole Output CP: '%d'\n", pagina_ocp);

    SetConsoleOutputCP(437);
    SetConsoleCP(437);
    printf("\tConsole CodePage '%d' Output CodePage: '%d'\n", 
        GetConsoleCP(), GetConsoleOutputCP());
    testa();
    SetConsoleCP(850);
    SetConsoleOutputCP(850);
    setlocale(LC_ALL, "Portuguese");
    printf("\tConsole CodePage '%d' Output CodePage: '%d'\n",
        GetConsoleCP(), GetConsoleOutputCP());
    testa();
    SetConsoleOutputCP(pagina_ocp);
};

void testa()
{   // esse e um trecho de um programa de um aluno
    // esta aqui so para testar os acentos
    printf("\n***** teste operações *****\n");;
    printf("=-= =-= =-= OPERAÇÕES =-= =-= =-= \n");
    printf("[ 1 ] - Adição \n");
    printf("[ 2 ] - Multiplicação \n");
    printf("[ 3 ] - Subtração \n");
    printf("[ 4 ] - Divisão \n");
    printf("\n***** áéíóúãõñ fim do teste *****\n\n\n");;
};  // testa()