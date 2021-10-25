#include <stdio.h>
int main() 
{
    int n, aux, primo = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for (aux = 2; primo && (aux <= n/2); aux++)
        if ((n % aux) == 0)
        primo = 0;
        if (primo)
            printf("Numero primo\n");
        else
            printf("Numero composto\n");
    return 0;
}
