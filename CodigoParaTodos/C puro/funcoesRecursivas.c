#include <stdio.h>

int fatorial3 (int a){
    int fat = 1;
    for (int i=1; i<= a; i++){
        fat*=i;
    }
    return fat;
}

int fatorial3Rec (int a){
    if ( a >= 1){
        return a * fatorial3Rec(a-1);
    } else {
        return 1;
    }
}


int fatorialRec (int x){
    if (x>0){
        return x*fatorial(x-1);
    }
    else{
        return 0;
    }
}

int fatorial (int x){
    int fat =1;
    while (x>0){
        fat *= x;
        x--;
    }
    return fat;
}

int main (void){

    int num;
    printf ("Qual o nr? --> ");
    scanf ("%d", &num);

    printf ("\nfatorial de %d != %d" , num,fatorial(num));
    printf ("\nfatorialRec de %d != %d" , num,fatorialRec(num));
    printf ("\nfatorial3 de %d != %d" , num,fatorial3(num));
    printf ("\nfatorial3 de %d != %d" , num,fatorial3Rec(num));
    return 0;
}