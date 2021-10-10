#include <iostream>	
#include <string>				
using namespace std;

namespace SpaceA{
    int A;
}
namespace SpaceB{
    int A;
}

//using namespace SpaceA,SpaceB;
int main()
{
    SpaceA::A=SpaceB::A = 1;
    std::cout << A+1;
    /*
    string s1="Ab";
    string s2= "Abc";
    cout << s1.compare(s1);

    string s= "a";
   // cout << s <<"b" + "c";
    
*/
    system("pause");				
	return 0;	
}
