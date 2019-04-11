#include<stdio.h>
main() {
	char word[100];
	char cnt = 0;
	scanf("%s", word);
	for (int i = 0; i < 100 && word[i]!='\0'; i++) {
		printf("%c", word[i]);
		cnt++;
		if (cnt % 10==0) 
			printf("\n");
	}
	return 0;
}