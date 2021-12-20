#include <iostream>	
#include <string.h>
#include <math.h>		
#define MAX 10
using namespace std;


int * ordenaVetor(int *v){
    int aux,i;
    for (int j=1;j<MAX;j++){
            aux = v[j];
            i = j-1;
        while (i>=0 && v[i]>aux){
            v[i+1]=v[i];
            i = i-1;
            }
    v[i+1]=aux;
    }
    return v;
    cout << endl;
}

void copiaVector(int *vet){
    int vet2[MAX],*vt;
    for (int i=0; i<MAX; i++){
        *(vet2 + i) = *(vet +i);
    }
    vt = ordenaVetor(vet2);
    for (int i=0; i<MAX; i++){
        cout << vt[i]<< "|";
    }
}


int main()								
{
    int nums[MAX] = {3,5,2,1,8,10,12,15,21,25};

    copiaVector(nums);
    cout << endl;
    system("pause");				
	return 0;	
}