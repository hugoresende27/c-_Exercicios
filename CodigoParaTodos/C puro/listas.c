
#include <stdio.h>>
#include <stdlib.h>

struct no{
    int dados;
    struct no *next;
};

struct no *inicio = NULL;

void inserir (int d){
    
    //criar apontador
    struct no *p =(struct no*) malloc(sizeof(struct no));
    p -> dados = d;
    p -> next = inicio;
    inicio = p;

}

void mostrar (){
    
    //criar apontador
    struct no *p =inicio;
    printf ("\n[");
    while (p != NULL){

        printf ("%d ",p -> dados);
        p = p -> next;
    }
    printf ("]\n");
 

}


int main()								
{
  
    inserir(1);
    inserir(69);
    inserir(777);
    mostrar();
    				
	return 0;	
}