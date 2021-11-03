#include <iostream>
using namespace std;

int main(){
	int num1,num2,num3,num4,elementos,soma;
	cout<<"Introduza 4 numeros:\n";
	cin>>num1;cin>>num2;cin>>num3;cin>>num4;
	//
	if(num1%2==0){
	elementos=elementos+1;soma=soma+num1;}
	if(num2%2==0){
	elementos=elementos+1;soma=soma+num2;}
	if(num3%2==0){
	elementos=elementos+1;soma=soma+num3;}
	if(num4%2==0){
	elementos=elementos+1;soma=soma+num4;}
	
	cout<<"Numero de elementos pares: "<<elementos;	
	cout<<"\nSoma pares: "<<soma<<endl;	
	system("pause");
	return 0;
}