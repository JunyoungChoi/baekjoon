#include<stdio.h>

main() {
	int A, B, C, X, Y;
	scanf("%d %d %d %d %d", &A, &B, &C, &X, &Y);
	if (C >= (A + B) / 2) {
		printf("%d", A*X + B*Y);
	}
	else if (2 * C < A && 2 * C < B) {
		if (X > Y) {
			printf("%d", 2 * X*C);
		}
		else {
			printf("%d", 2 * Y*C);
		}
	}
	else if (2 * C < A) {
		if (X > Y) {
			printf("%d", 2 * X*C);
		}
		else {
			printf("%d", 2 * X*C + (Y-X)*B);
		}
	}
	else if (2 * C < B) {
		if (Y > X) {
			printf("%d", 2 * Y*C);
		}
		else {
			printf("%d", 2 * Y*C + (X - Y)*A);
		}
	}
	else {
		if (X > Y) {
			printf("%d", 2 * Y*C + (X - Y)*A);
		}
		else {
			printf("%d", 2 * X*C + (Y - X)*B);
		}
	}
}