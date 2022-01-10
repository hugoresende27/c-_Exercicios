//random number generator

#include <iostream>	
#include <string.h>
#include <math.h>	
#include <stdlib.h> //srand, rand
#include <time.h>	
#include <algorithm>
using namespace std;

int main()								
{
    //pseudo random nrs
    srand(time(NULL)); //criar uma seed de rand

    //int number = rand() % 6 +1; //gerar aleatorio entre 1 e 6
    // int number1 = rand() % 10 +1;
    // int number2 = rand() % 10 +1;
    // int number3 = rand() % 10 +1;

    int num , rsp, score =0;
    num = rand() % 10+1; //entre 10 e 1

    do{
        cout << "NUM [1-10]-->";
        cin>>rsp;
        if (rsp>num){
            cout<< "Muito alto!\n";
        } else if (rsp<num){
            cout << "Muito baixo!\n";
        } else {
            cout <<  "YOU WIN!\n";
        }
        score++;

    }while (num != rsp);

    cout << "Num tentativas:: "<<score;

    cout << endl;
    system("pause");				
	return 0;	
}