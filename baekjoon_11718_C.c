#include <stdio.h>
int main(int argc, const char * argv[])
{
	char a[100];
	while (scanf("%[^\n]s", a) != EOF) {
		getchar();
		printf("%s\n", a);
	}
	return 0;
}
