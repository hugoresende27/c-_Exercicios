#include <stdio.h>
#include <conio.h>
  //definição da enum
  enum meses_do_ano {Janeiro = 1, 
  Fevereiro = 2, Marco = 3, 
  Abril = 4, Maio = 5, Junho = 6,
  Julho = 7, Agosto = 8, Setembro = 9, Outubro = 10, Novembro = 11, Dezembro = 12}meses;

int main()
{
  printf("Digite o numero do mes: ");
  scanf("%d",&meses);
  
  //Testando se o valor está na faixa válida usando os valores da enum
  if((meses >= Janeiro) && (meses <= Dezembro))
  {
  
    //switch que determina qual mes será impresso na tela
    switch(meses)
    {
    case Janeiro:
    printf("%d - Janeiro",meses);
    break;
    
    case Fevereiro:
    printf("%d - Fevereiro",meses);
    break;
    
    case Marco:
    printf("%d - Marco",meses);
    break;
    
    case Abril:
    printf("%d - Abril",meses);
    break;
    
    case Maio:
    printf("%d - Maio",meses);
    break;
    
    case Junho:
    printf("%d - Junho",meses);
    break;
    
    case Julho:
    printf("%d - Julho",meses);
    break;
    
    case Agosto:
    printf("%d - Agosto",meses);
    break;
    
    case Setembro:
    printf("%d - Setembro",meses);
    break;
    
    case Outubro:
    printf("%d - Outubro",meses);
    break;
    
    case Novembro:
    printf("%d - Novembro",meses);
    break;
    
    case Dezembro:
    printf("%d - Dezembro",meses);
    break;
    
    }
  }
  else //senão estiver na faixa válida exibe mensagem
  {
    printf("Valor INVALIDO!!!\n");
    
    printf("Os valores validos para os meses do ano sao: \n\n");
    //Loop que exibe a faixa de valores válida
    //Note que os valores da enum são na realidade inteiros
    //então podemos incrementa-los e usar no loop
    int meses;
    for(meses = Janeiro; meses <= Dezembro; meses++)
      printf("Mes: %d \n",meses);
  }
  
  getch();
  return 0;
}