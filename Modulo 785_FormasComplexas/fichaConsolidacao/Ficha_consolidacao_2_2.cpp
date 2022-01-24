#include<stdio.h>

/* 
	******** esta função vai receber um apontador de um ficheiro, procurar a posição do ultimo char e retornar essa ultima posicao em formato long
*/

long cnt_char(FILE *f)
{
    fseek(f, -1L, 2);			//  vai colocar o apontador no ultimo char (-1)
    long ultima_pos = ftell(f); //  vai atribuir o valor da ultima posicao 
    ultima_pos++; 				//  adiciona mais um à ultima posição, senão não apanha o ultimo char por causa do "\n"
    return ultima_pos;
}

int main()
{
    int i;
    long cnt;
    char ch, ch1;
    FILE *fp1, *fp2;

    if (fp1 = fopen("fich1.txt", "r"))
    {
        fp2 = fopen("fich2.txt", "w");
        cnt = cnt_char(fp1);    

        fseek(fp1, -1L, 2);		// coloca o apontador de fp1 (fich1) no final 
        printf("Número de carateres: ", ftell(fp1));

        while (cnt)
        {
            ch = fgetc(fp1);	// variável ch vai receber um char do fich1
            fputc(ch, fp2);		// vai colocar esse char no fich2
            fseek(fp1, -2L, 1); // apontador desloca se para o final do fich1 novamente
            cnt--;              //decremento do contador
        }
        printf("???");
    }

    fclose(fp1);
    fclose(fp2);
    
    return 0;
}

