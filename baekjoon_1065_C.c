#include <stdio.h> 
main(void){
	unsigned int N, cnt=0;
	scanf("%d", &N);
	if (N < 100)
		printf("%d", N);
	else if (N < 1000) {
		for (int i = 100; i <= N; i++) {
			if (i / 100 - (i - i / 100 * 100) / 10 == (i - i / 100 * 100) / 10 - i % 10) 
				cnt++;
		}
		printf("%d", 99 + cnt);
	}
	else
		printf("%d", 144);
	return 0;
}