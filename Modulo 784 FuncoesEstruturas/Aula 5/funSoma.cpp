
#include <iostream>	
		
using namespace std;


int soma(int *n1, int *n2){
    return (*n1+*n2);
}

int * soma2(int *n1, int *n2){
    int *ptr_res;
    int res;
    ptr_res = &res;
    *ptr_res = (*n1 +*n2);
    cout << ptr_res<<endl; //o conteudo de ptr_res é igual ao endereco de memoria de &res
    cout << &res<<endl;
    cout << res<<endl;
    return ptr_res;
}

int main()								
{
    int a,b;
    int *total;
    cout << "Valor a--> ";
    cin >> a; 
    cout << "Valor b--> ";
    cin >> b;
    cout<< "*********************\n";
    cout << "Soma = "<< soma(&a,&b)<<endl;
    cout<< "*********************\n";
    cout <<  soma2(&a,&b)<<endl;
    cout<< "*********************\n";
    total = soma2(&a,&b);
    cout << "VALOR TOTAL::"<<*total<<endl;
    cout << "endereco memoria TOTAL::"<<total<<endl;//enderece de memoria total = a endereco de memória de *ptr_res
    system("pause");				
	return 0;	
}