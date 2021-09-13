#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

string encontraNome (string array_nomes[], bool vez_jogador);		//prototype da funcao encontraNome
int jogada (bool jogador, int fichas_no_monte, string array_nomes[]);
void introduzNome (string jogadores[]);	

const int MAX_CHIPS = 100; 		//constante para m�ximo de fichas
const float MAX_TURN = 0.5;		//constante para o maximo q pode levar ser 0.5 do total

int main()
{
	setlocale(LC_ALL, "Portuguese");
	ofstream ficheiro_res;
	ficheiro_res.open("jogo_chips_resultados.txt", ios::app);
	
	int tentativas =0;
	bool jogador = true;
	bool gameOver = false;
	int fichas_no_monte =0;
	int fichas_tiradas=0;
	char cont;
	string nomes_jogadores [2];
	
	srand(time(0));
	
	introduzNome(nomes_jogadores);

	do {														//inicio ciclo quer continuar (s/n)
		
		fichas_no_monte= (rand()%MAX_CHIPS)+1;//random entre 1 e MAX_CHIPS 
		cout << "ao todo existem "<<fichas_no_monte<<" fichas na pilha"<<endl;
		gameOver=false;
		tentativas = 0;
		while (gameOver==false)		//enquanto var gameover estiver false, como foi inicializada
		{
			
			fichas_tiradas=jogada(jogador,fichas_no_monte,nomes_jogadores);
			fichas_no_monte =  fichas_no_monte-fichas_tiradas;
			cout << "Restam " << fichas_no_monte<<endl;
			jogador =! jogador;
			tentativas ++;
			
			if ( fichas_no_monte == 0)
			{
				gameOver = true;
				cout << encontraNome(nomes_jogadores,jogador)<<"----YOU WIN!!!!\n";
				ficheiro_res<<encontraNome(nomes_jogadores,jogador)<<" em "<<tentativas<<" tentativas"<<endl;
			}
		}
		cout<<"querem continuar? (s)im/(n)ao\n";		//no fim, a pergunta quer continuar
		cin>>cont; 	
		cont = tolower(cont);			
	}while (cont=='s');		//fim ciclo quer continuar (s/n), l� input var cont	    
	return 0;	
}
//////////////////////////////////////////////////////////////////////
void introduzNome (string jogadores[])
{
	cout << "Nome jogador 1 :: ";
	cin >> jogadores[0];	
	cout << "Nome jogador 2 :: ";
	cin >> jogadores[1];
	
}		
///////////////////////////////////////////	///////////////////////////////////	///////////////////////////////////	///////////////////////////////////		
string encontraNome (string array_nomes[], bool vez_jogador)	//funcao nome, recebe a var nome[0 ou 1] e var jogador=true
{			
if (vez_jogador == true)								// se jogador == true, 
		return array_nomes[0];					//return nome [0]
	else								//else
		return array_nomes [1];				//return nome [1]
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	///////////////////////////////////	///////////////////////////////////	

///////////////////////////////////	///////////////////////////////////	///////////////////////////////////	///////////////////////////////////	///////////////////////////////////	
int jogada (bool jogador, int fichas_no_monte, string array_nomes[])
{
				
	int fichas_tiradas;	//fichas tiradas = 0 inicial da var
	int max_fichas=MAX_TURN*fichas_no_monte;			//maximo de fichas = 0 inici var
	
	do		//repetir, loop do enquanto chip_tiradas  assim se o jogador input nr fichas 
			{								//inv�lido vai continuar em loop, enquanto input  > max_fichas ou >1),
				
				cout <<"--->>"<< encontraNome(array_nomes,jogador)<<" quantas fichas queres??"<<endl; //funcao encontraNome
			
				cout <<"apenas pode levar " ;
				
				if ((max_fichas) == 0)		//se maximo fichas for 1
				{
					cout <<"1 \n";			//vai imprimir 1, para n�o ter o bug de 0.5 fichas 
				}
				else
				{
					cout <<max_fichas<<endl; //senao imprime o maximo de fichas a tirar, situacao normal
				}
				if (encontraNome(array_nomes,jogador)=="AI")
				{
					if (max_fichas == 0)
					{
						fichas_tiradas=1;
					}
					else
					{
						fichas_tiradas= (rand()% max_fichas)+1;
					}
				}
				else
				{
				cin >> fichas_tiradas;		//inputas fichas tiradas pelo jogador
				}
			
			}while ((fichas_tiradas>max_fichas) && (fichas_no_monte>1));//enquanto fichas tiradas forem mais do que 0.5 das fichas,
																	//no caso do input ser mais q o permitido.&&chips 1 para prevenir
																	//1ficha a dividir e loop infinito
			//chips= chips- chips_tiradas;		//tira fichas da pilha
			
			return fichas_tiradas;
	
	
}
