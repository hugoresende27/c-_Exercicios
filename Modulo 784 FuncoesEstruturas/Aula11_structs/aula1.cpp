#include <iostream>	
#include <string.h>
using namespace std;

struct Estudante{
    char nome [50];
    char curso[50];
    int idade;
    float media;
};
//////////////////////////////////////////////////////////////////////////////
typedef struct { //AO USAR typedef , NOME DA STRUCT VEM NO FIM
    int comp;
    int larg;
}retangulo;

/////////////////////////////////////////////////////////////////////////////
typedef struct {//posicao{//POSSO COLOCAR NOME DA struct NO FIM OU NÃO, OPCIONAL
    int x;
    int y;
}posicao;

////////////////////////////////////////////////////////////////////////////
typedef struct {       //ESTRUTURA CONSTRUIR USA DUAS ESTRUTURAS retangulo e posicao
    char dono[30];
    retangulo ret;  //estrutura ret baseada no retangulo com comp e larg
    posicao pos;    //estrutura pos baseada em posicao com x e y
}construir;

int main()								
{
    struct Estudante aluno1;//container com nome aluno1 que guarda estutura Estudante
    aluno1.idade = 33;
    aluno1.media = 17.5;
    strcpy(aluno1.nome, "Hugo Resende");
    strcpy(aluno1.curso, "Informática");

    printf ("%.2f\n", aluno1.media);
    printf ("%s\n", aluno1.nome);

    struct Estudante aluno2;
    aluno2.idade = 20;
    aluno2.media = 7.5;
    strcpy(aluno2.nome, "Ze Maria");
    strcpy(aluno2.curso, "Gestão");

    printf ("%s\n", aluno2.nome);    

//////////////////////////////////////////////////////////////////////////////

    retangulo meuRet = {5,10};  //PARA INSTANCIAR NÃO PRECISO USAR struct, APENAS O NOME DA estrutura
    printf ("COMPRIMENTO :: %d \nLARGURA :: %d", meuRet.comp, meuRet.larg);

/////////////////////////////////////////////////////////////////////////////STRUCTS INSIDE STRUCTS
//instanciar estrutura casa, dono, {retangulo{comp,larg}} , {posicao{x,y}}
    construir casa = {"Hugo", {5,10}, {32,48}}; 
    printf ("A casa na posicao %d %d tamanho %d %d proprietário :: %s",
                casa.pos.x,
                casa.pos.y,
                casa.ret.comp,
                casa.ret.larg,
                casa.dono);

////////////////////////////////////////////////////////////////////////////////STRUCTS AND ARRAYS

    posicao arr[]= {{0,1},{1,2},{3,4}};

    for (int i=0; i<3 ; i++){
        printf ("\n\t %d %d\n", arr[i].x, arr[i].y);
    }
////////////////////////////////////////////////////////////////////////////////STRUCTS AND POINTERS
    construir *ptr = &casa;
    printf ("Posicao x : %d\n", ptr -> pos.x);

    cout << endl;
    system("pause");				
	return 0;	
}