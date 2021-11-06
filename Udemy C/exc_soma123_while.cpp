#include <iostream>	
/*SOMA DE UM NUMERO 982= 9 + 8 + 2 = 19*/		
using namespace std;


int main()								
{
    int num,res=0,soma=0,contador=1, res2=0, somaTot=0;
    cout << "Numero--> ";
    cin >> num;

    while (num>0)
    {
        soma=0;
        while (num>0)
        {
            soma += (num%10);
            num /= 10;

            cout <<"RES::"<< res<<endl;
            cout <<"SOMA::"<< soma<<endl;
            cout <<"NUM::"<< num<<endl;
        }
        if (soma>9)
        {
            num = soma;
        }
       
    }
    cout <<"SOMA FINAL::"<< soma<<endl;

    
    
    cout<<endl;
    system("pause");				
	return 0;	
}