
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{
    float num1,num2;
    char op;
    bool saida=false;
    int fat,n,i;


    do
    {
        cout<<"CALCULADOR SIMPLES\n";
        cout<<"Primeiro valor?--> ";
        cin>>num1;
        cout<<"Segundo valor?--> ";
        cin>>num2;
        cout<<"\nQual a operação [ + | - | x | / | (f)atorial | (s)air ]?--> ";
        cin>>op;
        switch (op)
        {
            case '+':
                cout<<"Soma: "<<num1+num2<<endl;
                break;
            case '-':
                cout<<"Subtração: "<<num1-num2<<endl;
                break;
            case 'x':
                cout<<"Multiplicação: "<<num1*num2<<endl;
                break;
            case '/':
                cout<<"Divisão: "<<num1/num2<<endl;
                break; 
            case 'f':
             	cout<<"Programa fatorial\nInsira um numero-> ";
                cin>>n;	
                fat=1;
                i=1;
                while (i<=n)		//enquanto i menor ou igual ao numero inserido
                {
                    fat = fat*i;	//fatorial vai ser fatorial vezes 1, 2, 3, 4, ...
                    i++;			//incremento do i
                }
	            cout<<"O fatorial de !"<<n<<" ::: "<<fat<<endl;	
                break;
            case 's':
                saida = true;
                break;
            case 'S':
                saida = true;
                break;   
            
            default:
                cout<<"Opcao inválida\n";
                break;  
        }
     }while (!saida);

    cout<<"A ENCERRAR...\n";
	system ("pause");
	return 0;
}