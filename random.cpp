#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
	int dado = 0;
	
	srand(time(0));
	
	dado = (rand() %6)+1;
	cout << "Tiraste um "<<dado<<endl;
	
return 0;
}
