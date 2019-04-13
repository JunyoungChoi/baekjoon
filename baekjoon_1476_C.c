#include <stdio.h>
main()
{
	unsigned int E, S, M;
	unsigned int i;
	scanf("%d %d %d", &E, &S, &M);
	if (E == 15)
		E = 0;
	if (S == 28)
		S = 0;
	if (M == 19)
		M = 0;

	for (i = 1;; i++) {
		if (i % 15 == E)
			if (i % 28 == S)
				if (i % 19 == M)
					break;
	}
	printf("%d", i);
}
