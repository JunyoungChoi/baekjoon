#include <stdio.h>


int main() {
	char s[100];
	int cnt = 0;
	scanf("%s", s);
	for (int i = 0; s[i]!='\0'; i++) {
		if(s[i]>='A' && s[i]<='Z')
		printf("%c", s[i]);
	}

	return 0;
}