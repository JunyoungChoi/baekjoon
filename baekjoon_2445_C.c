#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < 2 * N - 1; i++) {
		for (int j = 0; j < 2 * N - 1; j++) {
			if (i < N - 1 && i < j && i + j < 2 * N - 2) {
				printf(" ");
			}
			else if (i > N - 1 && i > j && i + j > 2 * N - 2) {
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