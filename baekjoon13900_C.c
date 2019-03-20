#include<stdio.h>
#include<malloc.h>
main() {
	int N;
	int *arr;
	unsigned long long sum = 0, var_sum = 0;
	scanf("%d", &N);
	arr = (int*)malloc(sizeof(int)*N);
	for (int t = 0; t < N; t++) {
		scanf("%d", &arr[t]);
		var_sum += arr[t];
	}
	for (int t = 0; t < N - 1; t++) {
		var_sum -= arr[t];
		sum += arr[t] * var_sum;
	}
	printf("%lld", sum);
	free(arr);
}