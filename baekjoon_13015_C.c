#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < 2 * N - 1; i++) {
		for (int j = 0; j < 2 * N + 2 * (N - 1) - 1; j++) {
			if (j - i == N - 1) { printf("*"); }
			else if (i + j == 3 * N - 3) { printf("*"); }
			else if (i <= N - 1 && i == j) { printf("*"); }
			else if (i >= N && i + 2 * N - 2 == j) { printf("*"); }
			else if (i <= N - 1 && i + j == 4 * N - 4) { printf("*"); }
			else if (i >= N && i + j == 2 * N - 2) { printf("*"); }
			else if ((i == 0 || i == 2 * N - 2) && (j < N || j>4 * N - 4 - N + 1)) { printf("*"); }
			else { printf(" "); }
		}
		printf("\n");
	}

	return 0;
}