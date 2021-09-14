#include <wchar.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main(void)
{
    setlocale(LC_ALL, "pt_BR"); // also try "pt_BR"
    wprintf(L"Bem-Vindo ao CALCULADORA SIMULATOR 2018 - FOSÓRIO EDITION\n");
    
    cout << "Á túdó í com @acêntos marádôs";
}