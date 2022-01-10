#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

/*
Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to integral constants, 
the names make a program easy to read and maintain.
É um tipo de dado definido pelo usuário que define uma variável que vai receber apenas um conjunto restrito de valores.
 Na realidade, um enum é um conjunto de valores inteiros representados por identificadores.
*/

enum direcao { Este=99, Oeste=66, Norte=33, Sul=0 } dir;

enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};

enum year {Jan, Feb, Mar, Apr, May, Jun, Jul, 
          Aug, Sep, Oct, Nov, Dec};

enum modulos {c,java,php,python} op;



struct funcionario{
    char nome[20];
    enum departamento{
        D1 = 10,
        D2 = 11,
        D3 = 12
    };
};

int main()								
{


    op = php;
    cout << "DISC:: "<<op<<endl;

    enum modulos disc;
    disc = java;
    cout << "DISC:: "<<disc<<endl;

    enum week day;
    day = Wed;
    printf("Week:: %d \n",day);

    enum direcao coords;
    coords = Este;
    cout << "COORDS::"<<coords<<endl;

    dir = Norte;
    cout << "COORDS::"<<dir<<endl;

    for (int i=Mon; i<=Sun; i++){
        cout << i;
    }

    

    enum year yr;
    printf ("yr %d \n", yr);
    cout << "YR:: "<<yr<<endl;
    for (int i=Jan; i<=Dec; i++)      
      printf("%d ", i);


    cout << endl;
    system("pause");				
	return 0;	
}