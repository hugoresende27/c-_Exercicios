
#include <iostream>	
		
using namespace std;


int main()								
{                          //0,1,2,3,4, 5, 6, 7 ,8  ,9  ,10 ,11 ,12
    int numerosDecimais[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string numerosRomanos[] = {"I","IV","V","IX","X","XL", "L","XC","C","CD","D","CM","M"};
    string resultado;
    int num;
    cout <<"Qual o número?--> ";
    cin>>num;
    for (int i=12 ;i>=0 ;i-- )//ciclo para percorrer o array de numerosDecimais, do fim para o principio
    {
        while (numerosDecimais[i] <= num )  //os dois arrays tem o número equivalente nas posições respectivas, por ex. index 1 = 4 = IV, enquanto a var de input for maior do que o numero no array numerosDecimais
        {
            resultado += numerosRomanos[i]; //vai adicionar à var resultado o valor respectivo no index de numerosRomanos 
            num -= numerosDecimais[i];//vai retirar o valor adicionado (1,4,5,9,10,...1000) à var num, repete o ciclo até que num seja igual a 1, neste caso valor 1 de array numerosDecimais
        }
    }
    cout << "Resultado é igual a "<<resultado<<endl;
    system("pause");				
	return 0;	
}