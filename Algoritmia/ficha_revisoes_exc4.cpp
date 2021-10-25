/*
Elabore um programa que obtendo um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 10 pessoas,
permita executar o seguinte: Nota deve utilizar uma matriz
a. A maior e a menor altura do grupo;
b. A média de altura das mulheres;
c. O número de homens;
d. A percentagem de homens e de mulheres
*/
#include <iostream>	
		
using namespace std;


int main()								
{
   
    float vetorAltura[10];
    char vetorSexo[10];
    float alturaMax,alturaMin;
    //cout << sizeof(vetorAltura);
    for (int i=0 ; i< 3 ; i++)
    {
        printf ("Qual a altura do elemento [%d]--> ",i+1);
        //cin >> vetorAltura[i];
        scanf ("%f",&vetorAltura[i]);
        printf ("Qual o sexo do elemento [%d]--> ",i+1);
        //cin >> vetorSexo[i];
        scanf ("%s",&vetorSexo[i]);
    }

    for (int i=0;i<3;i++)
    {
        printf ("------------------------------------------\n");
        printf ("Altura :: %.2f",vetorAltura[i]);
        printf ("\tSexo :: %c \n",vetorSexo[i]);
    }

    for (int i=0;i<3;i++)
    {
        if (i==0)
        {
            alturaMax = vetorAltura[i];
            alturaMin = vetorAltura[i];
        }
        if (vetorAltura[i]>alturaMax)
        {
            alturaMax=vetorAltura[i];
        }
        if (vetorAltura[i]<alturaMin)
        {
            alturaMin = vetorAltura[i];
        }
    }
    cout << "A altura maxima vai ser "<<alturaMax<<endl;
    cout << "A altura minima vai ser "<<alturaMin<<endl;


    system("pause");				
	return 0;	
}
