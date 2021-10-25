#include <stdio.h>

int main(void)
{
    int m, i, j;
    printf ("TAMANHO--> ");
    scanf("%d", &m);
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= i; j++) 
        {
            putchar('#');
        }
        putchar('\n');
    }
return 0;
}