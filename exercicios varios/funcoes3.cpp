#include <iostream>
#include <cstdlib>
using namespace std;

int parabens (string);
void parabens ();

int main ()
{
	int idade;
    setlocale(LC_ALL,"Portuguese");
    parabens ();
    parabens("Hugo");
    idade = parabens("Hugo");
    
    
}


void parabens ()
{
	cout << "Parabens a voce\n";
}

int parabens (string nome)
{
    int idade;
    cout << "Parabéns "<<nome<<endl;
    cout << "Idade:"<<endl;
    cin >> idade;
    return idade;

}
