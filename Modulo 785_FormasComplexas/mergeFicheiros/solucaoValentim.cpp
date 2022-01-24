#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

int main(){

    FILE *f1,*f2,*f3;
    int tamF1,tamF2,pos; 
    char str1[100],str2[100]; 
    char temp1,temp2; 
    
  
    f1=fopen("vendas.txt","r");
    f2=fopen("numeros.txt","r");
    f3=fopen("merge.txt","w");

//ciclo para tamanho do ficheiro
while(true){
		temp1=fgetc(f1);
		if(temp1==EOF){
			break;
		}else{
		tamF1++;	
}
}
while(true){
		temp2=fgetc(f2);
		if(temp2==EOF){
			break;
		}else{
			tamF2++;	
}
}


//cout << tamF1 << tamF2;

fseek(f1,0,0);
fseek(f2,0,0);

while(1){
    if (feof(f1)){
        break;
    }
    fgets(str1,tamF1,f1);
    fputs(str1,f3);	
    	
}

while(fgets(str2,tamF2,f2) != NULL ){
    fgets(str2,tamF2,f2);
    fputs(str2,f3);      
}

  fclose(f1);
  fclose(f2);
  fclose(f3);
  


    cout << endl;
    system("pause");				
	return 0;	
}