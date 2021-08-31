#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	
    ifstream ficheiroA;			//include? file stream, declarar a var ficheiroA
    ficheiroA.open("pass.txt");//  .open(nome do ficheiro)
    
    ofstream ficheiroB;			//open? file stream, declarar a var ficheiroB, se n�o existir cria o ficheiro
    ficheiroB.open("pass2.txt", ios::app);//ios::app faz apend no fim
    
	int tentativa=0;
    string pass;				//var pass, do tipo string
    if (!ficheiroA.fail())		//para nao crashar o programa se o ficheiro n�o existir
    {
    	while (ficheiroA>>pass)	//enquanto houver info no ficheiro, se n�o tiver while s� l� a primeira linha
        {
        	cout<<"A pass � "<<pass<<endl;	//print de "A pass �" + texto do ficheiro
        	cout<<"qual a sua tentativa?"<<endl;
        	cin>>tentativa;
        	if (tentativa==pass.length())		//se a var de input tentativa for igual ao numero de carateres de pass
        	{									//a var pass assume o valor de cada linha do ficheiro txt
        		cout <<"----YOU WIN----\n";
			}
			else
			{
				cout <<"GAME OVER\n";
				ficheiroB<<pass<<endl; 			//sempre que falho o lenght(), adiciona o que est� na var pass ao 
			}									//ficheiroB.txt
		}
        
    }
ficheiroA.close();		//fechar o ficheiro
ficheiroB.close();
}
