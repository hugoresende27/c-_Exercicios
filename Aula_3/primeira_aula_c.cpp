#include <iostream>						//incluir a biblioteca iostream
using namespace std;


int main()								//função main é a função principal do programa, por onde ele inicia
{
	setlocale (LC_ALL,"Portuguese");
	cout<<"Olá Hugo!!"<<endl; 			//cout para imprimir no ecrã, endl para quebra de linha
	cout<<"Linguagem C"<<endl;
	for (int i = 0; i < 3; i++)		//ciclo for
    {
        cout << static_cast<char>(2) ;
    }
	system("pause");				//para fazer uma pausa quando se corre o ficheiro exe
	return 0;	
}

/*

comentario várias linhas  
indentar, por às escadinhas xD
Este ficheiro é o ficheiro fonte (source) -> cpp
Existe tbm o ficheiro .exe, o executável próprio para o processador do pc entender

*/                                                                                    
