#include <iostream>	
//#include <string>				
using namespace std;


int main()								
{
    string nome="Hugo";
    string nome2("Hugo");   //outra maneira de incializar uma string
    cout<<nome; 
    cout<<nome2;

    string al ="ALFA";
    string beta(al);    //posso passar uma variavel para dentro da string nome(var)
    cout<<beta;

    string cima="YIN",baixo="YANG";
    cout << cima + " &&" + baixo <<endl;        //concatenar strings usa se +

    string naopode;
   // naopode = "A" + "B";      //não posso concatenar letras numa string
    naopode = naopode + "C";
    naopode= "B" + naopode;
    cout << naopode << endl;

    string the_question = "To be ";
    the_question += "or not to be";//posso usar o operador += para juntar strings
    cout << the_question << endl;


    system("pause");				
	return 0;	
}
