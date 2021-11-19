/*Pretende-se saber a média de 5 notas inseridas pelo utilizador*/
#include <iostream>			
using namespace std;
int main()								
{
    float media=0,nota=0,total=0;
    for (int i=1;i<=5;i++)
    {
        printf ("Qual a nota %d --> ", i);
        scanf ("%f",&nota);
        total+=nota;  
    }
    media = total / 5;
    printf ("O aluno tem media %.2f\n", media);
    system("pause");				
	return 0;	
}