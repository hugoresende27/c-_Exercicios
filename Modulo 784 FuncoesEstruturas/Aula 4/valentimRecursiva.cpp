#include <iostream>
using namespace std;
#define MAX 5

void funcaoAlf(char let1){
	cout<<let1<<"\t";
}
int main(){
	char let;
	for(let = 97; let <= 122; let++)
    {
	    funcaoAlf(let);
	}
	system("pause");				
	return 0;	
}
