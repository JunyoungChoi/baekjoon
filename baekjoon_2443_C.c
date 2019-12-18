#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	for (int i = N; i > 0; i--) {
		for (int j = i; j < N; j++) {
			printf(" ");
		}
		for (int j = i * 2 - 1; j > 0; j--) {
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}