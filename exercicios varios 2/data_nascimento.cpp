/*Programa input data em formato (00/00/0000) e imprime a data e idade*/
#include <iostream>	
		
using namespace std;


int main()								
{
    int dia,mes,ano,dia_atual,mes_atual,ano_atual,idade;
    printf ("Insira a data de hoje DD/MM/AAAA --> ");
    scanf ("%d/%d/%d",&dia_atual,&mes_atual,&ano_atual);
    printf (" A data de nascimento DD/MM/AAAA --> ");
    scanf ("%d/%d/%d",&dia,&mes,&ano);
   
    idade = ano_atual-ano;
    if (mes > mes_atual)        //se o mês de nascimento ainda não tiver chegado
    {
        idade--;                //um ano de idade a menos
    }
    else if (mes==mes_atual)        //se estivermos no mes de nascimento
    {
        if (dia > dia_atual)  //se o dia de nascimento for maior do que o dia atual, ainda não
          {  idade--; }       //se chegou ao dia de nasimento, portanto ainda não fez anos este ano        
    }        

    printf("DATA ATUAL::::::: %d / %d / %d \n",dia_atual,mes_atual,ano_atual);
    printf("DATA NASCIMENTO:: %d / %d / %d \n",dia,mes,ano);   
    printf ("Tem %d anos de idade\n", idade);                 
    
    system("pause");				
	return 0;	
}