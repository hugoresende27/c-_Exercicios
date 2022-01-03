#include <iostream>	
#include <string.h>
#include <math.h>	

using namespace std;

typedef union Book{
    int pages;
    float prices;
    char name[20];
    char editora[30];
};



int main()								
{
    union Book book1;
    strcpy(book1.name, "Programar em C");
    //strcpy(book1.editora, "EDITORA 1");
    
    cout << "NOME do livro "<<book1.name<<endl;
    
    strcpy(book1.editora, "EDITORA 1");
    cout << "EDITORA do livro "<<book1.editora<<endl;
    cout << "NOME do livro "<<book1.name<<endl;
    printf ("--> %d",book1.pages);
    cout<< "Preços "<<book1.prices<<endl;
    cout<< "PAginas "<<book1.pages<<endl;
   
    book1.pages = 750;
    cout<< "PAginas "<<book1.pages<<endl;

    book1.prices = 2 * book1.pages;
    cout<< "Preços "<<book1.prices<<endl;

    printf ("Tamanho de book1 %d", sizeof(book1)); //tamanho da posição de memória da maior variável
    cout <<endl;
    system("pause");				
	return 0;	

}
