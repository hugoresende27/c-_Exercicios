#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

void printNumber(int * numberPtr){
    cout << *numberPtr << endl;
}
////////////////////////////////////////////////////////////////
void printLetter(char * charPtr){
    cout << *charPtr << endl;
}
////////////////////////////////////////////////////////////////
void print ( void * ptr, char type){ //esta função recebe o tipo de dados e trata com um switch case
    switch (type)
    {
    case 'i':
        /* tratar int*/
        cout<< *((int*)ptr);  //cast para apontador inteiro *(dereference)
        break;
    case 'c':
        /* tratar char*/
        cout<< *((char*)ptr);
        break; 
    default:
        break;
    }
}


int main()								
{

    int number = 5;
    char letra = 'c';
    //printNumber(&number);
    //printLetter(&letra);
    print(&number,'i');
    print(&letra,'c');
    cout << endl;
    system("pause");				
	return 0;	
}