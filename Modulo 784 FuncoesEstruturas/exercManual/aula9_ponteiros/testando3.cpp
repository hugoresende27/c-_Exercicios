#include <iostream>
using namespace std;

int main(){
	int i,*arrayA[5];
    int aux;

 
    
	for(i=0;i<5;i++){
        cout << "--> ";
        scanf ("%d", &aux);
	    //scanf("%i",&arrayA[i]);
        arrayA[i] = &aux;
	}
    
    //cout << &arrayA[0];
    //printf ("%d", *arrayA[0]);
    
	for(i=0;i<5;i++){
	    //cout<< &arrayA[i]<< " | ";
	    cout<< *arrayA[i]<< " | ";
	    //cout<< arrayA[i]<< " | ";
	}
    
    system("pause");				
	return 0;	
}
