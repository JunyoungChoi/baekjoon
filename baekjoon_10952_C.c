#include<stdio.h>
#include<malloc.h>
main() {
	
	int A[100000], B[100000];
	int i;
	for (i = 0;i<100000; i++) {
		scanf("%d %d", &A[i], &B[i]);
		if (A[i]==0 && B[i] == 0)
			break;

	}
	for (int j = 0; j<i; j++) {
		printf("%d\n", A[j] + B[j]);

	}

	return 0;
}