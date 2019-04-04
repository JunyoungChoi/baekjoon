#include <stdio.h> 

main(void)
{	
	unsigned int N;
	scanf("%d", &N);
	for (char i = 0; i < 2 * N - 1; i++){
		for (char j = 0; j < N; j++) {
			if ((i + j) < N - 1 || (i - j) >= N && i > j) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}