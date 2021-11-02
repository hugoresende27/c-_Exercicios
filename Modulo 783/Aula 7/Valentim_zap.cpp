#include <iostream>	
#include <string>	
using namespace std;

int main()
{
int nLin,nCol;
//string matriz[nLin][nCol];
int mat2[nLin][nCol];

    
cout<<"Criar uma matriz/tabela \n";
cout<<"Numero de linhas: ";
cin>>nLin;

cout<<"Numero de colunas: ";
cin>>nCol;

cout<<"Insira os dados para a tabela: \n";
	
for(int i=0;i<nLin;i++)
{
	for(int j=0;j<nCol;j++)
    {
        //cin>>matriz[i][j];
        cin>>mat2[i][j];
	}
}
    //imprimir
for(int i=0;i<nLin;i++){
	for(int j=0;j<nCol;j++){
    //cout<<matriz[i][j];
    cout<<mat2[i][j];
    cout<<" | ";
	}
	cout<<endl;
}
system("pause");				
return 0;	
}
