#include <iostream>
using namespace std;

void function1(int *a){
	//if 2 is in the array return true
        for (int i=0; i<5;i++){
        if (a[i]==2){
            cout<<" true\n";
        }
        else{
            cout<< "false\n";
        }
    }
}


int main(){
	int array1[5]={1,2,3,4,2};	
    
    //cout << function1(array1);
    function1(array1);
    
	
	//if true print 2 found
}