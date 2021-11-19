#include <iostream>						//incluir a biblioteca iostream
using namespace std;


int main()								//fun��o main � a fun��o principal do programa, por onde ele inicia
{
	setlocale (LC_ALL,"Portuguese");
	cout<<"Olá Hugo!!"<<endl; 			//cout para imprimir no ecr�, endl para quebra de linha
	cout<<"Linguagem C"<<endl;
	for (int i = 0; i < 3; i++)		//ciclo for
    {
        cout << static_cast<char>(2) ;
    }
	system("pause");				//para fazer uma pausa quando se corre o ficheiro exe
	return 0;	
}

/*

comentario v�rias linhas  
indentar, por �s escadinhas xD
Este ficheiro � o ficheiro fonte (source) -> cpp
Existe tbm o ficheiro .exe, o execut�vel pr�prio para o processador do pc entender

*/                                                                                    
