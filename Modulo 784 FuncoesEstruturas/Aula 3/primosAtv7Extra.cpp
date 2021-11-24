#include <iostream>	
		
using namespace std;

//// FUNÇÃO QUE RETORNA 1 SE PRIMO, 0 SE NÃO É PRIMO  ///////////////////////////////////////////////
int funPrimos (int x)
{
    int cont = 0;
    for (int i=1; i<=x;i++)
    {
        if ( x % i == 0)
        {
            cont ++;
        }
    }
    if ( cont == 2 )
    {
        return 1;
    }
    else {
        return 0;
    }
}
//// PROCEDIMENTO(void) PARA PREENCHER O VETOR E IMPRIMIR //////////////////////////////////////////////////
void procVetorPrimos (int n)
{
    int vetPrimos[1000];//vetor criado aqui com 100 indexes
    int tamVetor=0;//contador do tamanho do vetor
    
    for (int i=1; i<n; i++) //ciclo para percorrer de 1 até ao n (parametro recebido do utilizador no main (var num))
    {
        if (funPrimos(i)==1)//se a função primo retorna 1
        {
            vetPrimos[tamVetor] = i;    //vetor na posião tamVetor vai receber o i, que é primo
            tamVetor++;                 //vetor avança 1 index
        }
        
    }
    for (int i=0; i<tamVetor; i++)      //ciclo para imprimir vetor, até ao tamVetor, tamanho do vetor que foi incrementado no contador tamVetor
    {
        cout<< vetPrimos[i] << " | ";       //cout do vetor separado por " | "
    }

}


int main()								
{
    int num;
    
    cout << "Qual o limite--> ";    
    cin >> num;             //input do limite
    procVetorPrimos(num);    //o procedimento VetorPrimos vai chamar a função funPrimos dentro dele
    system("pause");				
	return 0;	
}