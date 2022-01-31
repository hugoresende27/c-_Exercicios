#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

int main()								
{
  int n;
  printf ("Tamanho do array->");
  scanf("%d",&n);

  int *ptArr = (int*)malloc(n*sizeof(int));//array alocado dinamicamente
  //preencher o array com valores a começar no 1
  for (int i=0; i < n; i++){
      ptArr[i] = i+1;   
  }
  //imprimir o array
  for (int i=0; i < n; i++){
      printf("%d - ",ptArr[i]);
  }
  free(ptArr);

  system("pause");				
  return 0;	
}