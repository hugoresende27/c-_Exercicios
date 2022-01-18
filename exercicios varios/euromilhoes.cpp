/*
Pretende-se simular o funcionamento de um jogo da sorte, neste caso o Euro Milhões. 
No Euro Milhões são sorteadas chaves (compostas por cinco números e duas estrelas). 
Os números de uma chave estão compreendidos entre 1 e 50 e não se podem repetir, já as estrelas de uma chave 
estão compreendidas entre 1 e 12 e também não podem ser repetidas. 
Apesar de ser possível construir chaves escolhendo mais números e/ou estrelas, vamos assumir que nesta aplicação, 
cada chave terá obrigatoriamente cinco números e duas estrelas. 
A aplicação deve: 
1. Permitir ao utilizador jogar com uma chave inserida manualmente; 
2. Validar a chave inserida da forma que considerar adequado; 
3. Mostrar a chave inserida para jogo de forma ordenada; 
4. Gerar uma chave aleatória (chave sorteada) também de cinco números e duas estrelas; 
5. Mostrar a chave sorteada de forma ordenada; 
6. Validar a ocorrência de números e estelas iguais, informando quantos, quais e qual o prémio atribuído 
(este prémio é apenas exemplificativo). 
Bom trabalho! 
CONSIDERAÇÕES TÉCNICAS: 
 Esta aplicação funciona apenas para um utilizador, não havendo necessidade de login. 
 Cada jogada corresponde a uma nova execução do programa. 
 Para esta aplicação, as chaves são compostas apenas e só por cinco números e duas estrelas. 

 Sugerir e implementar funcionalidade adicionais que julgar úteis e interessantes ao âmbito da aplicação. 
Exemplo: 
o Permitir ao utilizador jogar com uma chave gerada aleatoriamente 
o Permitir ao utilizador jogar com chaves compostas (mais números e/ou mais estrelas) 
o Implementar um sistema de menu para perguntar ao utilizador o que pretende fazer e repetir o 
processo. 
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
#include <algorithm>
using namespace std;

void menu(){
    cout<<"PROGRAMA EUROMILHÕES\n";
    cout<<"***************************\n";
    cout<<"*  1. Introduzir Chave   **\n";
    cout<<"*  2. Gerar Chave        **\n";
    cout<<"*  3. Ver Chave Jogada   **\n";
    cout<<"*  4. Ver Chave Gerada   **\n";
    cout<<"*  5. Ver Prémio         **\n";
    cout<<"*  0. Sair               **\n";
    cout<<"***************************\n";
}

void introduzChave(int arrChave[],int arrEstre[]){
    int chave_temp,estrela_temp;
    //input chave
    for (int i=0; i< 5;i++){
        
        do{
            cout<< "Num "<<i+1<<"-> ";
            cin >>chave_temp;
            if(chave_temp<1 || chave_temp>50 ) cout << "Entre 1 e 50\n";                                                                               
        }while (chave_temp<1 || chave_temp>50 );
        arrChave[i]=chave_temp;
    }  
    //input estrelas
    for (int i=0; i<2;i++){
        do{
            cout<< "Estrela "<<i+1<<"-> ";
            cin >>estrela_temp;
            if(estrela_temp<1 || estrela_temp>12) cout << "Entre 1 e 12\n";
        }while (estrela_temp<1 || estrela_temp>12);
        arrEstre[i]=estrela_temp;
        }
}

void ordenaChave(int arrChave[]){
  //sorting - ASCENDING ORDER
    int temp;
	for(int i=0;i<5;i++)
	{		
		for(int j=i+1;j<5;j++)
		{
			if(arrChave[i]>arrChave[j])
			{
				temp  =arrChave[i];
				arrChave[i]=arrChave[j];
				arrChave[j]=temp;
			}
		}
	}
}

void imprimeChave(int arrChave[],int arrEstre[]){
    
    //print da chave ordenada
    //cout << "\nCHAVE\t       ESTRELAS\n";
    for (int i=0; i< 5;i++){
        cout <<"-"<< arrChave[i];
    }
    for (int i=0;i<2;i++){
        cout << " #"<<arrEstre[i];
    }
    cout<<endl;
}

void geraChave(int arrChave[],int arrEstre[]){
    int n1 ,n2;        
    //input chave
    for (int i=0; i< 5;i++){
        n1 = rand() % 50+1; 
        arrChave[i]=n1;
    }  
    //input estrelas
    for (int i=0; i<2;i++){
        n2 = rand() % 12+1;
        arrEstre[i]=n2;
        }
}

void verificaPremio (int arrApostaChave[],int arrApostaEstr[], int arrGeradoChave[], int arrGeradoEstr[]){
    int numsAcertados=0;
    int estrAcertados=0;
    for (int i=0; i<5;i++){
        for (int j=0 ; j<5; j++){
            if (arrApostaChave[i]==arrGeradoChave[j]){
                numsAcertados++;
            }
        }
    }
    for (int i=0; i<2;i++){
        for (int j=0 ; j<2; j++){
            if (arrApostaEstr[i]==arrGeradoEstr[j]){
                estrAcertados++;
            }
        }
    }
    cout << "Acertou "<<numsAcertados<< " e "<< estrAcertados<< " estrelas\n";
}


int main()								
{
    int chave[7]={0};//={0} para verificar mais abaixo se está vazio
    int estrelas[2];

    int chaveSorteada[7];
    int estrelasSorteadas[2];

    int op;
    do{
        menu();
        cout<<"Opção--> ";
        cin >>op;
        switch (op)
        {
            case 0:
                cout << "Adeus...";
                exit(0);
            case 1:
                introduzChave(chave,estrelas); 
                ordenaChave(chave); 
                cout<<"chave jogada\n";
                imprimeChave(chave,estrelas);
                break;
            case 2:
                geraChave(chaveSorteada,estrelasSorteadas);
                ordenaChave(chaveSorteada);
                cout<<"chave gerada\n";
                imprimeChave(chaveSorteada,estrelasSorteadas);
                break;
            case 3:
                
                if (chave [0]==0){
                    cout << "Ainda não existe chave!\n";
                }
                else{
                    imprimeChave(chave,estrelas);
                }
               
                break;
            case 4:
                geraChave(chaveSorteada,estrelasSorteadas);//se não tiver sido gerada a chave antes vai sempre gerar aqui nova chave
                imprimeChave(chaveSorteada,estrelasSorteadas);
                break;
            case 5:
                if (chave [0]==0){
                    cout << "Ainda não existe chave!\n";
                } else {
                    geraChave(chaveSorteada,estrelasSorteadas);//se não tiver sido gerada a chave antes vai sempre gerar aqui nova chave
                    cout<<"chave jogada\n";
                    imprimeChave(chave,estrelas);
                    cout<<"chave sorteada\n";
                    imprimeChave(chaveSorteada,estrelasSorteadas);
                    verificaPremio(chave,estrelas,chaveSorteada,estrelasSorteadas);
                }
                break;
            
            default:
                cout << "escolha inválida\n";
                break;
        }
    }while (true);
    


    cout << endl;
    system("pause");				
	return 0;	
}
