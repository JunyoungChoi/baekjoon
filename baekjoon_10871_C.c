#include <stdio.h>
main()
{
	unsigned int N, X,num[10000];
	scanf("%d %d", &N, &X);
	for (unsigned int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	for (unsigned int i = 0; i < N; i++) {
		if (num[i] < X)
			printf("%d ", num[i]);
	}
	return 0;
}
