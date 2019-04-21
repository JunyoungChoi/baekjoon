#include <stdio.h> 
main(void)
{
	int three, five, N;
	scanf("%d", &N);
	five = N / 5;
	if (N == 4 || N == 7)
		printf("-1");
	else if (N % 5 == 0) {
		printf("%d", five);
	}
	else {
		int temp = N % 5;
		while (1) {
			if (temp % 3 == 0) {
				three = temp / 3;
				break;
			}
			else {
				temp += 5;
				five--;
			}

		}
		printf("%d", five + three);
	}
	return 0;
}