#include <iostream>	
#include <vector>				
using namespace std;


int main()								
{
    vector<int> numeros (5);
    bool troca;
   
   for (int i = 0; i < numeros.size() ;i++)
    {
        cout<<"NR "<<i+1<<" :: ";
        cin>>numeros[i];
    }

do{
    troca = false;
    for (int i=0; i < (numeros.size()-1) ;i++)      
    {                           
        if (numeros[i]>numeros[i+1])
        {
            troca = true;
            int aux = numeros[i];
            numeros[i]=numeros[i+1];
            numeros[i+1]=aux;
        }
        
    }
}while (troca);

    for (int i = 0; i < numeros.size();i++)
    {
        cout<<"|"<<numeros[i];
    }
    cout<<endl;
    system("pause");				
	return 0;	
}