#include <iostream>
using namespace std;

int main ()
{
    int vetor1[] = {83,79,82,84,69};
    char vetor2[5]; 
    cout<<"Programa Vetores em ASCII\n";
    vetor2[0]=vetor1[0];
    vetor2[1]=vetor1[1];
    vetor2[2]=vetor1[2];
    vetor2[3]=vetor1[3];
    vetor2[4]=vetor1[4];
    
    cout<<vetor2[0]<<endl;
    cout<<vetor2[1]<<endl;
    cout<<vetor2[2]<<endl;
    cout<<vetor2[3]<<endl;
    cout<<vetor2[4]<<endl;
    printf ("\t%s\n", vetor2);
    
    system("pause");
	return 0;
}
