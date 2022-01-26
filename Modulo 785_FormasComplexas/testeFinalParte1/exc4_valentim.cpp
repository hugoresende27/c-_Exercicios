#include <iostream>
#include <string>
using namespace std;
char para_Mai(char c){
    if (islower(c))
		return toupper(c);
}
char para_Min(char c){
    if (isupper(c))
		return tolower(c);
}

int main(){

    FILE *fileMai, *fileMin, *fileOr; 
    
    char carac;
    char nomefile1[20],nomefile2[20];

    fileOr=fopen("programar_c.txt", "r");
    cout<<"--Transformar caracteres do ficheiro em minusculas e minusculas--\n\n";
    cout<<"Introduza nome do ficheiro Maiusculas. Introduza .txt no final:";
    cin>>nomefile1;
    cout<<"Introduza nome do ficheiro Minusculas. Introduza .txt no final:";
     cin>>nomefile2;
    fileMai = fopen(nomefile1 , "w");
    fileMin = fopen(nomefile2 , "w");

	// Verifica se foi poss?vel abrir/criar os ficheiros
	if(fileOr == NULL){
		printf("Erro ao abrir o ficheiro programar_c.txt . \n");
	}
	if(fileMai == NULL || fileMin==NULL){
		printf("Erro ao abrir/criar ficheiros maiusculas e/ou minusculas .\n");
	}
    	
	while (fscanf(fileOr, "%c", &carac) != -1){
		if (islower(carac)){
			fputc(para_Mai(carac),fileMai);
		}else{
			fputc(carac,fileMai);
		}
		if (isupper(carac)){
			fputc(para_Min(carac),fileMin);
		}else{
			fputc(carac,fileMin);
		} 
    }


    fclose(fileOr);
    fclose(fileMai);
    fclose(fileMin);

    return 0;
}


