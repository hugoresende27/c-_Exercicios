#include <iostream>					
using namespace std;


int main()								
{
    float media,nota1,nota2,nota3;
    cout << "Qual a nota do aluno 1--> ";
    cin >> nota1;
    cout << "Qual a nota do aluno 2--> ";
    cin >> nota2;
    cout << "Qual a nota do aluno 3--> ";
    cin >> nota3;
    media = (nota1+nota2+nota3)/3;
    cout << "MEDIA:: "<<media<<endl;
    if (media >=9.5)
        cout << "Aprovado\n";
    else
        cout <<"Reprovado\n";
    system("pause");				
	return 0;	
}