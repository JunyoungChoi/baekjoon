#include<stdio.h>
main() {
	unsigned long long n, m;
	scanf("%lld:%lld", &n,&m);
	for (unsigned long long t = 2; t <= n&t <= m; t++) {
		if (n%t == 0 && m%t == 0) {
			n = n / t;
			m = m / t;
			t = 2;
		}
	}
	printf("%d:%d", n,m);
	return 0;
}