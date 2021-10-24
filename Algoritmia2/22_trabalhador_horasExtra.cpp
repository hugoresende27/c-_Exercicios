/*
A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais
de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%.
Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva
o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas
(considere que o mês possua 4 semanas exatas)
*/
#include <iostream>	
		
using namespace std;

int main()								
{
    int horas;
    float valor_hora,salario,salario_base,salario_extra;
    printf ("Programa Salários Funcionário V1\n");
    printf ("Qual o valor por hora ? --> ");
    scanf ("%f",&valor_hora);
    printf ("HORAS DO MÊS --> ");
    scanf("%d",&horas);
    if (horas<=160)     //160 = 40 horas X 4 semanas
    {
        salario = valor_hora*horas;
    }
    else
    {
        if (horas>160)
        {
            salario_base = valor_hora*160;
            salario_extra = (valor_hora*1.5)*(horas-160);
            salario = salario_base+salario_extra ;
            printf ("Vai receber este mês %.2f € de salário base\n",salario_base);
            printf ("Vai receber este mês %.2f € de horas extra\n",salario_extra);
        }
    }
    

    printf ("Vai receber este mês %.2f € de salário\n",salario);

    system("pause");				
	return 0;	
}