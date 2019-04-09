#include <stdio.h> 
main(void)
{
	unsigned char M = 0;
	unsigned char score;
	unsigned int N,sum=0;

	scanf("%d", &N);
	for (unsigned int i = 0; i < N; i++) {
		scanf("%d", &score);
		if (score > M)
			M = score;
		sum += score;
	}
	printf("%.2f", (float)sum / ((unsigned int)M*N) * 100);
	return 0;
}