#include <stdio.h> 

int IsPrimeNumber(int n);


int main(void)
{
	unsigned int T,n,j;
	unsigned int arr[10000];
	scanf("%d", &T);
	for (unsigned int i = 0; i < T; i++) {
		scanf("%d", &arr[i]);
	}
	for (unsigned int i = 0; i < T; i++) {
		for (j = 0; IsPrimeNumber((arr[i]/2) + j)==0 || IsPrimeNumber((arr[i]/2) - j)==0; j++);
		printf("%d %d\n", arr[i] / 2 - j, arr[i] / 2 + j);
	}
	return 0;
}

int IsPrimeNumber(int n) 
{
	int i = 0;
	int last = n / 2;   
	if (n <= 1)
	{
		return 0;
	}
	for (i = 2; i <= last; i++) 
	{
		if ((n%i) == 0) 
		{
			return 0;
		}
	}
	return 1; 
}