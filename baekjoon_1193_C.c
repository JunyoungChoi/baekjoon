#include <stdio.h>
main() {
	unsigned int X,i;
	scanf("%d", &X);
	for (i = 1;X>i; i++) {
			X -= i;
	}
	(i % 2 == 1) ? printf("%d/%d\n", i + 1 - X, X) : printf("%d/%d\n", X, i + 1 - X);
	return;
}