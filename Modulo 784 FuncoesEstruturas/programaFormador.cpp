#include <iostream>

using namespace std;

// Exemplo de uma função COM retorno
int soma (int n1, int n2)
{
	int r;
 	r=n1+n2;
 	return r;
}

int f1(char op)
{
/*
	switch (op)
 	{
 		case 'm' :
 			cout << "Bom dia";
 			break;
 		case 't' :
 			cout << "Boa tarde";
 			break;
 		default:
 			cout << "opcao invalida";
	}
*/	
	return (int)op;
}

/* Exemplo de uma função SEM retorno (void)
void soma (int n1, int n2)
{
	int r;
 	r=n1+n2;
 	cout << "Resultado : " << r;
}
*/

int main ()
{
 	int a,b,z;
 	char op;
 	a=5;
 	b=3;
 	//z = soma(a,b);
 	//cout << "Resultado : " << z;
 	cout << "Insira um caracter: ";
 	cin >> op;
 	for(int i=0;i<26;i++)
 	{
	 	cout << (char)(op + i) << " " << f1(op+i) << endl;
	}
	return 0 ;
}
