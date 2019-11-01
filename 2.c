#include <stdio.h>
 
// Function to print all n-digit numbers whose digits
// are strictly increasing from left to right.
// out --> output array
// start --> Current starting digit to be considered
// index --> index of next digit to be filled in output array
// size --> value of N
void findStrictlyIncreasingNum(int start, char out[], int index, int size)
{
	// If number becomes N-digit, print it
	if (index == size)
	{
	    out[index] = '\0';
		printf("%s ", out);
		return;
	}
     int i;
	// start from (prev digit + 1) till 9
	for (i = start; i <= 9; i++)
	{
		// append current digit to number
		out[index] = '0' + i;
 
		// recurse for next digit
		findStrictlyIncreasingNum(i + 1, out, index + 1, size);
	}
}
 
// Driver code
int main()
{
	int n = 9;
	char str[n + 1];
	findStrictlyIncreasingNum(0, str, 0, n);
 
	return 0;
}
