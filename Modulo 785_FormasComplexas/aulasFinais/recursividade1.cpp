#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;
/*Na linguagem C, assim como em muitas outras linguagens de programação, uma função pode chamar a si própria.
 Uma função assim é chamada função recursiva. Todo cuidado é pouco ao se fazer funções recursivas.
  A primeira coisa a se providenciar é um critério de parada. Este vai determinar quando a função deverá parar de chamar 
  a si mesma. Isto impede que a função se chame infinitas vezes.
Uma função que calcule o fatorial de um número inteiro n é um bom exemplo de uma função recursiva:
Note que, enquanto n não for igual a 0, a função fat chama a si mesma, cada vez com um valor menor. n=0 é critério de parada para esta função.

Há certos algoritmos que são mais eficientes quando feitos de maneira recursiva, mas a recursividade é algo a ser evitado 
sempre que possível, pois, se usada incorretamente, tende a consumir muita memória e ser lenta. Lembre-se que memória é 
consumida cada vez que o computador faz uma chamada a uma função. Com funções recursivas a memória do computador pode se 
esgotar rapidamente.*/



//////////////////////////////////////////////////////////////
int fatorial (int x) 
{
    if (x!=0){
        cout << "x vale -> "<<x<<endl;
        return x*fatorial(x-1);
        
    } else {
        cout << "Fat Recursivo::";
        return 1;
      
    }
}


//////////////////////////////////////////////////////////////
int somatorio (int x) 
{
    if (x!=0){
        cout << "x vale -> "<<x<<endl;
        return x+somatorio(x-1);
        
    } else {
        cout << "over\n";
        return 0;
      
    }
}

//////////////////////////////////////////////////////////////
int fatorialSimples (int a)
{
    int fat = 1;
    for (int i=1; i<= a; i++){
        fat*=i;
    }
    return fat;
}

int main()								
{


    int num,op;

    do
    {
        cout << "NUM (+ positivo) :: ";
        cin >> num;
    } while (num<=0);
    
  

    do {
        cout << "--------------\n1.FATORIAL Recursivo\n2.FATORIAL Simples\n3.SOMATORIO\n4.SAIR\n--> ";
        cin >> op;
        switch (op)
        {
            case 1:
                cout <<  fatorial(num)<<endl;
                break;
            
            case 2:
                cout << "FATORIAL Simples:: "<< fatorialSimples(num)<<endl;
                break;
            
            case 3:
                cout << "SOMATORIO :: "<< somatorio(num)<<endl;
                break;
            case 4:
                cout << "Encerrando ....\n";
                exit(0);
            
            default:
                cout<<"Inválido\n";
                break;
        }
        
    } while (1);
    


    cout << endl;
    system("pause");				
	return 0;	
}

