// #include <iostream>

// using namespace std;

// int main(){
// 	int  	mat[10][15], i, j,somaLinha,somaColuna;
	
// 	for (i=0;i<5;i++){
// 		for (j=0;j<5;j++){
// 			cout<<"Introduza o numero para "<<i<<j<<":";
// 			cin>>mat[i][j];
// 		}
// 	}
// 	for (i=0;i<5;i++){
// 		somaLinha=0;
// 		for (j=0;j<5;j++){
// 		 somaLinha=somaLinha + mat[i][j]; 
// 		}
// 		cout<<"\nSoma da linha"<<i+1<<" : " <<somaLinha<<endl;
// 		if (somaLinha = (somaLinha%2==0)? printf("Par") : printf("Impar"));
// 	}
	
	
// 	for(i=0;i<5;i++){
//         somaColuna = 0;
//         for(j=0;j<5;j++){
//         somaColuna = somaColuna + mat[j][i];        
//     }
//     cout<<"\nSoma da coluna"<<i+1<<" : "<<somaColuna<<endl;
//     if (somaColuna = (somaColuna%2==0)? printf("Par") : printf("Impar"));
// }
	 
// 	return 0;
// }

#include <iostream>	
#include <string>	
using namespace std;

#define PAL 5
#define LET 10

int main()								
{
	int i,j;
    char matriz[PAL][LET];
    //introduzir carater a carater
/*	for (i=0;i<PAL;i++){
        for (j=0;j<LET;j++){
		cin >> matriz[i][j];   
       }
}*/
    for (i=0;i<PAL;i++)
	{
    	printf("Disciplina %d: \n",i);
    	cin>> matriz[i];
    }

    for (int i=0; i<PAL; i++)
	{
    	for (int j=0;j<LET;j++)
		{
    		cout <<" "<<matriz[PAL][LET]<<" "; 
			printf("%c", matriz[i][j]);
	    }
	cout << endl;
	}

    system("pause");				
	return 0;	
}