#include <stdio.h> 
int main(void) {
	unsigned long long N, cnt = 0;
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%lld", &N);
		unsigned int j = 2;
		while (1) {
			if (N % j == 0) {
				N /= j;
				cnt++;
				continue;
			}
			else {
				if (cnt != 0)
					printf("%d %lld\n", j, cnt);
				j++;
				cnt = 0;
			}
			if (N == 1)
					break;

		}
	}

	return 0;
}