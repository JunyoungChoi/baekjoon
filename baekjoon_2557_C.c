#include<stdio.h>
main() {
	char string[5];
	printf("��ȣȭ �� ���ڿ� ");
	scanf("%s", string);
	for (int i = 0; i < 27; i++) {
		printf("key �� %d ��ȣȭ �� ���ڿ� %c%c%c%c%c\n", i, (string[0] - i) < 'a' ? (string[0] - i + 25):(string[0]-i) , (string[1] - i) < 'a' ? (string[1] - i + 25) : (string[1] - i), (string[2] - i) < 'a' ? (string[2] - i + 25) : (string[2] - i), (string[3] - i) < 'a' ? (string[3] - i + 25) : (string[3] - i), (string[4] - i) < 'a' ? (string[4] - i + 25) : (string[4] - i));
	}
}