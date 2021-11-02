#include <iostream>	
#include <string>	
using namespace std;

int main(){
int i,j,nLin,nCol;
string matriz[i][j]={};
    
cout<<"Criar uma matriz/tabela \n";
cout<<"Numero de linhas: ";
cin>>i;
nLin=i;
cout<<"Numero de colunas: ";
cin>>j;
nCol=j;
cout<<"Insira os dados para a tabela: \n";
	
for(i=0;i<nLin;i++){
	for(j=0;j<nCol;j++){
	//scanf("%s",&matriz[i][j]);
	cin>>matriz[i][j];
	}
}
    //imprimir
for(i=0;i<nLin;i++){
	for(j=0;j<nCol;j++){
    cout<<matriz[i][j];
    cout<<" | ";
	}
	cout<<endl;
}
system("pause");				
return 0;	
}


