#include<stdio.h>
#include<malloc.h>
main() {
	int T;
	scanf("%d", &T);
	int *A = (int *)malloc(sizeof(int)*T);
	int *B = (int *)malloc(sizeof(int)*T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A[i], &B[i]);
	}
	for (int i = 0; i < T; i++) {
		printf("%d\n", A[i]+B[i]);	
	}
	free(A);
	free(B);
	return 0;
}