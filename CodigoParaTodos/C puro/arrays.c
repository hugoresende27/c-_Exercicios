#include <stdio.h>

void printArr (int x[], int t){
    
    printf ("\nPRINT ARRAY::\n");
    for (int i=0; i<t; i++){

        printf ("%d | ", x[i]);
        
    }
}

void printArr2 (int *x,int t){
    printf ("\nPRINT ARRAY::\n");
    for (int i=0; i<t; i++){

        printf ("%d | ", *x);
        
    }
}

int main (void){

    int num;
    double media;
    int soma=0;


    printf ("Quantos números pretende inserir? \n");
    scanf ("%d", &num);

    int arr1[num];

    for (int i=0; i<num; i++){
        printf ("Valor--> ");
        scanf("%d", &arr1[i]);
    }

    for (int i=0; i<num; i++){
        soma += arr1[i];
    }

    media = (double)soma/num;
    printf ("SOMA:: %d",soma);
    printf ("MEDIA:: %.2f",media);

    printArr(arr1,num);

//ORDENAR POR ORDEM CRESCENTE
    for (int a=0; a<num; a++){
        for (int b=0; b<num - a - 1; b++){
            if (arr1[b]>arr1[b+1]){//se for maior do que na posição seguinte
                int temp = arr1[b] ;//temp recebe valor menor
                arr1[b] = arr1[b+1];//posicao b, anterior,recebe o maior que está na posição seguinte
                arr1[b+1] = temp;//posição anterior recebe temp q tem guardado valor menor
            }
        }
    }

    printArr(arr1,num);
    printArr2(arr1,num);

    
    return 0;
}