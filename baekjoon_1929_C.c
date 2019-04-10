#include<stdio.h>
#include<math.h>
main() {
	unsigned long long N, M;
	scanf("%lld %lld", &M,&N);
	for (unsigned long long i = M; i <= N; i++) {
		unsigned int jud=0;
		if (i == 1)
			continue;
		for (unsigned long long j = 2; j <= (unsigned int)sqrt(i); j++) {
			if (i%j == 0) {
				jud++;
				break;
			}
		}
		if (jud == 0)
			printf("%lld\n", i);
	}
	return 0;
}