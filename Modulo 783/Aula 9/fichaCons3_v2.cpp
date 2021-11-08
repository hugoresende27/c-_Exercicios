/*
No dia da estreia do filme "007", a produtora desenvolveu uma pesquisa logo após o encerramento do filme. Cada espectador respondeu a um questionário no qual constava a sua idade e a sua opinião em relação ao filme:
excelente - 3; bom - 2; regular - 1.

Crie um programa que receba a idade e a opinião de 20 espectadores, calcule e imprima:

A média das idades das pessoas que responderam excelente;
A quantidade de pessoas que responderam regular;
A percentagem de pessoas que responderam bom entre todos os expectadores analisados.
*/
#include <iostream>	
#define MAX 5
		
using namespace std;


int main()								
{
    int publico[MAX][2];
    
    int op=0;
    float mediaIdades=0,perBom=0;
    int somaIdades=0,pessoasExe=0,pessoasReg=0,pessoasBom=0;

    cout << "********** PROGRAMA CINEMA 007 *************\n";
    for (int i=0; i<MAX ; i++)
    {
       
            cout << "Espectador "<< i+1 << " Idade --> ";
            cin >> publico[i][0];
            do
            {
                cout << "Espectador "<< i+1 << " Opinião [1-Regular/2-Bom/3-Excelente] --> ";
                cin >>op;
            }while ((op<=0) || (op>3));
            publico[i][1] = op;

      
    }

    // for (int i=0; i<MAX; i++)
    // {
    //     switch (opiniao[i])
    //     {
    //     case 1:
    //         pessoasReg++;
    //         break;
    //     case 2:
    //         pessoasBom++;
    //         break;
    //     case 3:
    //         pessoasExe++;
    //         somaIdades+=idades[i];
    //         break;
        
    //     default:
    //         break;
    //     }
    // }



    cout << "************ Idade | Opinião [1-Regular/2-Bom/3-Excelente] ****\n";
    for (int i=0; i<MAX; i++)
    {
        cout << "Espectador "<< i+1 << " -> "<<publico[i][0]<<" | Op-> "<<publico[i][1]<<endl;
    }
    // cout<< "*******************************\n\n";
    // mediaIdades = somaIdades / pessoasExe;
    // //printf ("A média das idades das pessoas que responderam excelente-->%.2f anos", mediaIdades);
    // cout <<"A média das idades das pessoas que responderam excelente--> "<< mediaIdades <<" anos"<<endl;

    // cout <<"A quantidade de pessoas que responderam regular--> "<<pessoasReg<<endl;

    // perBom = (pessoasBom*100)/MAX;//percentagem total de pessoas q votaram bom X 100% a dividir pelo total de pessoas
    // cout <<"A percentagem de pessoas que responderam bom entre todos os expectadores analisados--> "<< perBom<<"%"<<endl;
    system("pause");				
	return 0;	
}