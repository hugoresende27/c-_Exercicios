#include <iostream>	
		
using namespace std;
int contador=0;
int numeros[10];
int maiores10=0;

int top(int vet[10]);
void erro(int vet[10]);
bool somatop();


int main()								
{
    int num;
    cout << "**** EXERCICIO 1 ****\n";
    for (int i=0; i<10; i++)
    {
        cout << "Insira um número "<<i<< "[0 para terminar]--> ";
        cin >> num;
        if (num == 0) break;
        else
        {
            numeros[i]=num;
            contador++;
        }
    }
    cout << "Função TOP:: "<<top(numeros)<<endl;
    cout << "Existem "<<maiores10<<" numeros maiores do que 10...\n";
    erro(numeros);
    cout << "PRINT DO VETOR\n";
    for (int i=0; i<contador;i++)
    {
        cout << numeros[i] << " | ";
    }
    cout << "Encerrando...\n";
    system("pause");				
	return 0;	
}

int top(int vet[10])
{
    int maior;
    for (int i=0; i<contador;i++)
    {
        if (vet[i]>10)
        {
            maiores10++;
            if (vet[i]>maior)
            {
                maior = vet[i];
            }
        }
    }
    return maior;
}

void erro(int vet[10])
{
 for (int i=0; i<10; i++)
    {
     if (vet[i]<0)
     {
        cout << "Inseriu o valor "<<vet[i]<< " na posição "<<i<<endl;
     }    
    }

 if (vet[5]<0)
 {
     somatop();
 }
}

bool somatop()
{
    numeros[5]=top(numeros);
    return true;
}
