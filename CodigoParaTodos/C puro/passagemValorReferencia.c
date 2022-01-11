#include <stdio.h>

void troca ( int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    
    printf ("\nDentro da função a :: %d e b :: %d", x,y);

}

void trocaPassagemPorReferencia ( int *x, int *y){ //passo a usar os parametros tipo apontador
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
    printf ("\nDentro da função a :: %d e b :: %d", *x,*y);

}


int main (void){

        int a = 1 ;
        int b = 2;

        printf ("\nAntes da troca a :: %d e b :: %d", a,b);

        //troca(a,b);
        trocaPassagemPorReferencia(&a,&b);  //passo o endereço

        printf ("\nDepois da troca a :: %d e b :: %d", a,b);

        return 0;
}