#include <iostream>					
using namespace std;


int main()								
{
    int quant;
    float difer,tota;
    cout<<"Quantos artigos?--> ";
    cin>>quant;
    tota=quant*0.40;
    if (tota<=500){
        difer=500-tota;
        cout<<"É possivel a compra "<<tota<<" troco:: "<<difer<<endl;
    }
    else{
        difer=tota-500;
        cout<<"Não é possivel a compra "<<tota<<" falta:: "<<difer<<endl;
    }

    system("pause");				
	return 0;	
}