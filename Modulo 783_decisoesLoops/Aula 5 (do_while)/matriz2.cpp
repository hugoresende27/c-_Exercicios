#include <iostream>	
		
using namespace std;


int main()								
{
    
    int matriz [5][3];

      for (int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            scanf ("%d",&matriz[i][j]);
        }
    }

    for (int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            //printf ("linha %d\tcoluna %d\n",i,j);     //("Elemento %d\n",matriz[i][j]);
            printf ("Elemento [%d][%d]::%d\n",i,j,matriz[i][j]);
        }
    }
    system("pause");				
	return 0;	
}