#include <stdio.h> 

int main(void)
{
	unsigned long long side = 2;
	unsigned int N;
	scanf("%d", &N);
	for (char i = 0; i < N; i++) {
		side = 2 * side--;
	}
	printf("%lld", side*side);
	return 0;
}