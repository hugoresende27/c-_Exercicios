#include <iostream>	
		
using namespace std;


int main()								
{
    int i;
    string alunos[]=          {"Hugo","Zé","Carlos","Rui"};

    // for (i = 0; i< 4;i++)
    // {
    //     cout << "Insira nome --> ";
    //     cin >> alunos[i];
    // }

    for (i = 0; i< 4;i++)
    {
        cout << alunos [i][0]<<endl;
    }

    
    system("pause");				
	return 0;	
}