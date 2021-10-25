#include <iostream>	
#include <stdlib.h>	
using namespace std;

void menu()
{
    printf ("***************************************\n");
    printf ("**** PROGRAMA MATRIZ DETERMINANTE *****\n");
    printf ("**** 1.Matriz de ordem 2 *****\n");
    printf ("**** 2.Matriz de ordem 3 *****\n");
    printf ("**** 3.Sair *****\n");
    printf ("***************************************\n");
    printf ("OPÇÃO--> \n");

}

void matriz2 ()
{
    int matriz [2][2];
    int deter=0;
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf ("input :: %d : %d--> ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            //printf ("\tElemento linha i %d coluna j %d == %d",i,j,matriz[i][j]);
            printf ("\t %d",matriz[i][j]);
        }
        printf("\n");
    }
    deter = ( matriz[0][0]*matriz[1][1] ) - ( matriz[0][1]*matriz[1][0] ) ;
    printf ("A determinante desta matriz é %d\n", deter);
    printf("\n\n");
}

/////////////////////////////////////////////////////////////////////////////
void matriz3 ()
{
    int matriz [3][3];
    int deter=0;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf ("input :: %d : %d--> ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            //printf ("\tElemento linha i %d coluna j %d == %d",i,j,matriz[i][j]);
            printf ("\t %d",matriz[i][j]);
        }
        printf("\n");
    }
    deter = ( ( matriz[0][0]*matriz[1][1]*matriz[2][2] ) + (matriz[0][1]*matriz[1][2]*matriz[2][0]) + (matriz[0][2]*matriz[1][0]*matriz[2][1]) ) -( ( matriz[0][0]*matriz[1][2]*matriz[2][1] ) + (matriz[0][1]*matriz[1][0]*matriz[2][2]) + (matriz[0][2]*matriz[1][1]*matriz[2][0]) );
    printf ("A determinante desta matriz é %d\n", deter);
    printf("\n\n");
}

//////////////////////////////////////////////////
int main()								
{

    int op;
    do
    {
        menu();
        cin>>op;
        switch (op)
        {
            case 1:
                matriz2();
                break;
            case 2:
                matriz3();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf ("OPÇÃO INCORRECTA\n");
                break;
        }
    }while (op!=3); 
    system("pause");				
	return 0;	
}