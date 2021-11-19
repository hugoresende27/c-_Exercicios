#include <iostream>

using namespace std;

int main(){

	char matriz[5][10] = {"disciplina","matematica"}; //{{'d','i','s','c','i','p','l','i','n','a'},{'M','a','t','e','m','a','t','i','c','a'}}; // declara uma matriz de 5 linhas e 3 colunas

    for(int i=0; i<5; i++)
    {
        cout << "Introduza a palavra ";
        cin  >>  matriz[i];
    }

	// Percorrer a matriz Linha / Coluna
	for(int i=0; i<5; i++){
	    for(int j=0; j<10; j++){
	        printf("%c", matriz[i][j]);
	    }
	    printf("\n");
	}
}
