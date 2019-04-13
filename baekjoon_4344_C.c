#include <stdio.h> 
main(void)
{
	unsigned int C,N;
	scanf("%d", &C);
	for (unsigned int i = 0; i < C; i++) {
		int score[1000], sum = 0, count = 0;
		scanf("%d", &N);
		for (unsigned int j = 0; j < N; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		for (unsigned int j = 0; j < N; j++) {
			if((double)sum/N< score[j])
				count++;
		}
		printf("%.3f%%", (double)count / N * 100);
	}
	return 0;
}