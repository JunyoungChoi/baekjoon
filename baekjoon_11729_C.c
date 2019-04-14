#include <stdio.h>

int N;
int count(int n) {
	int i, d = 1;
	for (i = 2; i <= n; ++i) d = 2 * d + 1;
	return d;
}

void hanoi(int n, int a, int b, int c) {
	if (1 == n) { printf("%d %d\n", a, c); return; }

	hanoi(n - 1, a, c, b);
	printf("%d %d\n", a, c);
	hanoi(n - 1, b, a, c);
}

int main() {
	scanf("%d", &N);
	printf("%d\n", count(N));
	hanoi(N, 1, 2, 3);
}