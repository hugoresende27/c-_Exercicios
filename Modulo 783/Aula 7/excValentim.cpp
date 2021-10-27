#include <iostream>

using namespace std;

int main(){
	int  	mat[10][15], i, j,somaLinha,somaColuna;
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			cout<<"Introduza o numero para "<<i<<j<<":";
			cin>>mat[i][j];
		}
	}
	for (i=0;i<5;i++){
		somaLinha=0;
		for (j=0;j<5;j++){
		 somaLinha=somaLinha + mat[i][j]; 
		}
		cout<<"\nSoma da linha"<<i+1<<" : " <<somaLinha<<endl;
		if (somaLinha = (somaLinha%2==0)? printf("Par") : printf("Impar"));
	}
	
	
	for(i=0;i<5;i++){
        somaColuna = 0;
        for(j=0;j<5;j++){
        somaColuna = somaColuna + mat[j][i];        
    }
    cout<<"\nSoma da coluna"<<i+1<<" : "<<somaColuna<<endl;
    if (somaColuna = (somaColuna%2==0)? printf("Par") : printf("Impar"));
}
	 
	return 0;
}