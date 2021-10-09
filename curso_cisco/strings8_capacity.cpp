#include <iostream>	
#include <string>				
using namespace std;

void print_info(string& s)
{
    cout << "length = " << s.length() << endl;
    cout << "capacity = " << s.capacity() << endl;
    cout << "max_size = " << s.max_size() << endl;
}

int main()								
{
    string alfa;
    cout << "Insira um texto e veja o espaço q ele ocupa enquanto cresce::";
    getline (cin,alfa);

    print_info(alfa);

    for (int i=0;i<10;i++)
    {
        alfa+=alfa;
        cout << alfa ;
    }
    
    print_info(alfa);
    alfa.reserve(500);//imune à função reserve porque já contem dados
    print_info(alfa);


    system("pause");				
	return 0;	
}