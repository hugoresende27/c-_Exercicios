/*
4. Insira a seguinte matriz:

nome	matematica	geografia	fisica	historia
jose	10	        11	        12	    10
manuel	12	        12	        10	    15
carla	15	        13	        17	    14
maria	17	        14	        18	    16
*/

#include <iostream>	
#include <string.h>		
using namespace std;
#define LIN 5
#define COL 5


int main()								
{
    string matriz [LIN][COL];

    for(int i=1; i<LIN; i++)
    {
        printf ("[%d]NOME-> ",i);
        cin >> matriz[i][0];
    }

    matriz[0][0]={"****"};

    for(int j=1; j<COL; j++)
    {
        printf ("[%d]DISCIPLINAS -> ",j);
        cin >> matriz[0][j];
    }

    for (int i=1;i<LIN;i++)
    {
        for (int j=1;j<COL;j++)
        {
            cout<<"A: "<<matriz[i][0]<<"  D: "<<matriz[0][j]<<"-->";
            cin >>  matriz[i][j];
        }
        
    }


    for (int i=0;i<LIN;i++)
    {
        for (int j=0;j<COL;j++)
        {
            cout<<matriz[i][j]<<"\t ";
        }
        cout<<endl;
    }

 
    system("pause");				
	return 0;	
}
