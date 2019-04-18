# include <stdio.h>
int main() {
	int num[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int max_num,max = 0;
	char N[8] = { '\0','\0' ,'\0' ,'\0' ,'\0' ,'\0' ,'\0','\0' };
	scanf("%s", N);
	for (int i = 0; N[i] != '\0'; i++) {
		num[N[i] - '0']++;
		if (num[N[i] - '0'] >= max) {
			max_num = N[i] - '0';
			max = num[N[i] - '0'];
		}
	}
	if (max_num != 6 && max_num != 9) {
		if (num[max_num] > (num[6] + num[9] + 1) / 2)
			printf("%d", num[max_num]);
		else
			printf("%d", (num[6] + num[9] + 1) / 2);
	}
	else {
		max = (num[6] + num[9] + 1) / 2;
		for (int i = 0; i < 10; i++) {
			if (i == 6 || i == 9)
				continue;
			if (max < num[i])
				max = num[i];
		}
		printf("%d", max);
	}
	return 0;
}
