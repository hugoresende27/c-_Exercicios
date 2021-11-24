#include <iostream>	
		
using namespace std;


int contaSil (string p)
{
    int sil=1;
    for (int i=0; i< p.length(); i++)
    {
        if (p[i] == '-')
        {
            sil++;
        }
    }
    return sil;

}

int main()								
{
    string pal;
    cout << "Insira palavra com - para separar as silabas--> ";
    cin >> pal;
    cout << "A palavra tem "<<contaSil(pal)<< " silabas\n";
    system("pause");				
	return 0;	
}