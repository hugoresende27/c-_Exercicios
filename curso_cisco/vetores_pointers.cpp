#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	
    vector<int> numbers {7, 3, 3};
	int *ptr = numbers.data() +1;//initial ptr's value points to numbers[1]; numbers.data()=ptr[0]
	ptr[-1]=*ptr+ptr[1];            //ptr[-1] points to numbers[0]=1;ptr[1] points to numbers[2]=3;  
    cout<<numbers[0]<<endl;         //*(ptr - 1) = *ptr + *(ptr + 1); //numbers[0] = numbers[1] + numbers[2];
  

    system("pause");				
	return 0;	

	
}