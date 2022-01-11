#include <stdio.h>


int main (void){

    int num;
    printf ("Qual o nr? --> ");
    scanf ("%d", &num);

    printf ("O valor da var é %d", num);
    printf ("\nO endereço da var é %d", &num);

    int *p;//* apontado pelo apontador
    p= &num;
    printf ("\nO valor da *p é %d", *p);
    printf ("\nO endereço da var é %d", p);
    printf ("\nO endereço do p é %d", &p);

    int a,b;
    int *p1 = &a, *p2 = &b;

    printf("\nInsira 2 numeros::");
    scanf("%d %d", p1, p2);

    if (*p1>*p2){
        printf ("Maior %d", *p1);
    }else {
        printf ("Maior %d", *p2);
    }

    return 0;
}