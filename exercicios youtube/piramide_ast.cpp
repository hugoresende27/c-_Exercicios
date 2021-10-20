#include <iostream>	
		
using namespace std;

void piramide(int alt)
{
   
    const int MARG = 5;
    int linha;
    cout << "\n\n";
    for (linha=1; linha <= alt; linha++)
    {
        
        int espaco = MARG + alt - linha;
        int cont;
        for ( cont= 1;cont <=espaco; cont++)
        {
            cout << " ";
        }
        for ( cont = 2;cont<=linha*2;cont++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n\n";
}

int main()								
{
    int altura;
    cout << "PROGRAMA PIRAMIDE\nAltura--> ";
    cin >> altura;
    piramide(altura);
    system("pause");				
	return 0;	
}