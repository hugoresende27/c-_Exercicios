#include <iostream>

#include <string.h>
using namespace std;

#define L 5
#define C 12

int main ()
{
	
	
	char matriz [L][C] = {"Disciplina", "Matematica", "Historia", "Fisica", "Geografia"};
	int linha, coluna;
	
	cout << endl;
	
   for (int linha = 0; linha <L; linha ++)
   {
		for (int coluna = 0; coluna < C; coluna ++)
		{
   			cout <<"  " << matriz [linha][coluna] << "  "  ; 
	    }
	cout << endl;
	}	

	
return 0;
}
