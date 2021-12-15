#include <iostream>

using namespace std;
 
#define MAX 10

int * f1(int *nums)
{
	int nums1[MAX / 2], j = 0;
	for (int i = 0; i < MAX; i++)
	{
		if(i % 2 != 0 && i != 0)
		{
			*(nums1 + j) = *(nums + i); // nums1[0] -> nums[1], nums1[1] -> nums[3]...nums[9]
			j++;
		}
	}
	
	return nums1;
}

int main() 
{
	int nums[MAX], i;
	int *ptr;
	
	for (i = 0; i < MAX; i++)
	{
		cout << "\nInsira o numero: " << " em " << (nums + i) << endl;
		cin >> *(nums + i); // -> nums[i]
	}
	
	ptr = f1(nums);

	for (i = 0; i < MAX / 2; i++)
	{
		cout << "\n" << *(ptr++);
	}
}
