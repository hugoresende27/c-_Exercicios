#include <iostream>					
using namespace std;


int main()								
{
    float pre_un,total,desc,total_desc;
    int qtd;
    cout<<"Quantas couves?--> ";
    cin>>qtd;
    cout<<"Preço unitário?--> ";
    cin>>pre_un;
    total=pre_un*qtd;
    if (qtd>10)
        desc=0.05;
    else if (qtd>=5)
        desc=0.03;  
    else
        desc = 0.02;
    total_desc=total-(total*desc);
    cout<<"O total vai ser "<<total_desc<<endl;
    

    system("pause");				
	return 0;	
}