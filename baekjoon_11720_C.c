#include<stdio.h>
int main() {
	int N;
	int num,sum;
	sum = 0;
	scanf("%d", &N);
	for (char i = 0; i < N; i++) {
		scanf("%d ", &num);
		sum += num;
	}
	printf("%d\n" , sum);
	return 0;
}