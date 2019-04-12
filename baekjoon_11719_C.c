#include <stdio.h>
main()
{
	char a;
	while (scanf("%c", &a) != EOF) {
		if (a == '\n') {
			printf("\n");
			continue;
		}
		printf("%c", a);
	}
	return 0;
}
