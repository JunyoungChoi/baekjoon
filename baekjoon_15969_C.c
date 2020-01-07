#include <stdio.h>
int score[1000];

int main()
{
	int n;
	int max = 0, min = 1000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
		if (score[i] > max) max = score[i];
		if (score[i] < min) min = score[i];
	}
	printf("%d", max - min);
	return 0;
}
