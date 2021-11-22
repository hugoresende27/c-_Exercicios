// Este programa verifica se um n�mero � primo
// Um n�mero primo, � um n�mero inteiro positivo, que s� � divis�vel por ele pr�prio e por 1 
/*
Com base no ficheiro em anexo (num_primo.cpp), altere o mesmo para que seja possível verificar se um número é "primo", utilizando uma função
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int i, n; 
  int contador = 0;
  
  printf("Insira um n�mero inteiro positivo: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    if (n % i == 0) { 
     contador++;
    }
  }
    
  if (contador == 2)
    printf("O n�mero %d � primo!", n);
  else
    printf("O n�mero %d n�o � primo!", n);

  return 0;
}
