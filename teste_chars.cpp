#include <wchar.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main(void)
{
    setlocale(LC_ALL, "Portuguese"); // also try "pt_BR"
    //wprintf("Bem-Vindo ao CALCULADORA SIMULATOR 2018 - FOS·RIO EDITION\n");
    
    cout << "TÈstando ¬cÈntos";
}
