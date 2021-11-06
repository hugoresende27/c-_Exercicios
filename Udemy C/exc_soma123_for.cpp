#include <iostream>	
/*SOMA DE UM NUMERO 982= 9 + 8 + 2 = 19*/		
using namespace std;


int main()								
{
    int num,res=0,soma=0;
    cout << "Numero--> ";
    cin >> num;

do
{
   for (int i=0; num>0 ; i++)
   {
    res = num%10; //%10 vai buscar o ultimo digito do número
    soma +=res;   //var soma vai somando o ultimo digito do número
    num /= 10;  //para ir retirando o ultimo digito a num, 1234 = 123 = 12 = 1
   }
   res=num;
} while (res>9);
    cout <<"SOMA FINAL ::"<< soma<<endl;
    cout <<"SOMA FINAL total ::"<< num << endl;


    cout<<endl;
    system("pause");				
	return 0;	
}