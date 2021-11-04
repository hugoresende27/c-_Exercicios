#include <iostream>	
/*SOMA DE UM NUMERO 982= 9 + 8 + 2 = 19*/		
using namespace std;


int main()								
{
    int num,res=0,soma=0,contador=1;
    cout << "Numero--> ";
    cin >> num;

    while (num>0)
    {
        res = num%10; //%10 vai buscar o ultimo digito do número
        soma +=res;   //var soma vai somando o ultimo digito do número
        num /= 10;  //para ir retirando o ultimo digito a num, 1234 = 123 = 12 = 1

        cout <<"RES::"<< res<<endl;
        cout <<"SOMA::"<< soma<<endl;
        cout <<"NUM::"<< num<<endl;
    }
    cout <<"SOMA FINAL::"<< soma<<endl;
    cout<<endl;
    system("pause");				
	return 0;	
}