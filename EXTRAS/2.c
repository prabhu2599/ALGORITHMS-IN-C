#include <iostream> 
using namespace std; 

int divisible(int arr[], int low, int high, int k) 
{ 

	if ((low > high) 
		|| (low == high && arr[low]%k != 0)) 
		return 0; 

	if (low == high && arr[low]%k == 0) {
	    printf("%d  ",arr[low]);
	    return 1; 
	}

	return divisible(arr, low, 
				(low + high) / 2, k) 
		+ divisible(arr, 1 + (low + high) / 2, 
				high, k); 
} 

int main() 
{ 
	int arr[] = { 30, 1, 42, 5, 56, 3, 56, 9 }; //A
	int n = sizeof(arr) / sizeof(int); 
	int k = 2; //k
	printf("Numbers in A that is divisible by k\n");
	divisible(arr, 0, n - 1, k); 

	return 0; 
} 
