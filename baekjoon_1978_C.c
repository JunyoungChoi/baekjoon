#include<stdio.h>
#include<math.h>
main() {
	unsigned int N, ans = 0;;
	scanf("%d", &N);
	for (unsigned int i = 0; i < N; i++) {
		unsigned int num, jud=0;
		scanf("%d", &num);
		if (num == 1)
			continue;
		for (unsigned int j = 2; j <= (unsigned int)sqrt(num); j++) {
			if (num%j == 0) {
				jud++;
				break;
			}
		}
		if (jud == 0)
			ans++;
	}
	printf("%d", ans);
	return 0;
}