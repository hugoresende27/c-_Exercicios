/*
Uma floricultura conhecedora de sua clientela gostaria de fazer um programa que
pudesse controlar sempre um estoque mínimo de determinadas plantas, pois
todo dia, pela manhã, o dono faz novas aquisições. Criar um algoritmo que deixe
cadastrar 50 plantas, nome, estoque mínimo, estoque atual. Imprimir ao final do
programa uma lista das plantas que devem ser adquiridas.
*/

#include <iostream>	
#define PLANTAS 3	
using namespace std;


int main()								
{
    char nomes [PLANTAS][100];
    int stock [PLANTAS][2]; //[0]= stock minimo [1]=stock atual
    cout << "NOMES DAS PLANTAS\n";
    for (int i=0; i<PLANTAS; i++){
        cout << "Nome da planta:: ";
        fflush(stdin);
        fgets(nomes[i], 100, stdin);
        cout << "STOCK atual:: ";
        cin >> stock[i][0];
        cout << "STOCK minimo :: ";
        cin >> stock[i][1];
    } 

    for (int i=0; i<PLANTAS; i++){
        if (stock[i][0]<stock[i][1]){
            printf ("\nStock MINIMO: %d \t Stock ATUAL: %d \n",stock[i][1],stock[i][0]);
            cout << "ENCOMENDAR --> "<< nomes[i]<<endl;
        }
    }
    system("pause");				
	return 0;	
}