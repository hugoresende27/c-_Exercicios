#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int x;
	cout <<"Introduza um valor :: ";
	cin >>x;
	if (x>10){									//executa at� uma condi��o ser true, se nenhuma for true
		cout <<"� maior do que 10"<<endl;
	}
	else if (x>7){
		cout <<"� maior do que 7"<<endl;
	}
	else if (x>5){
		cout << "� maior do que 5"<<endl;
	}
	else {				//vai para o else, tudo falso
		cout <<"� menor do que 5 certamente"<<endl;
	}

}
