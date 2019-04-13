#include <stdio.h>
#include <string.h>


int main() {
	char s[500];
	char lgc[] = "END";
	int cnt = 0, i=0;
		while (1) {
			scanf("%[^\n]\n", s);
			if (strcmp(s, lgc)==0)
				break;
			for (int j = strlen(s) - 1; j >= 0;j--) {
				printf("%c", s[j]);
			}
			printf("\n");
		}
		return 0;
}
