#include <stdio.h> 
#include <math.h>
main(void)
{
	unsigned long long n, last, sqr, sum = 0;

	scanf("%lld", &n);
	if (n == 1) {
		printf("%d", 1);
		return 0;
	}
	else if (n == 3) {
		printf("%d", 6);
		return 0;
	}
	else if (n == 4) {
		printf("%d", 9);
		return 0;
	}
	else {
		last = n - 1;
		sqr = sqrt(n) - (int)sqrt(n) >= 0.5 ? (int)sqrt(n) + 1 : (int)sqrt(n);
		for (unsigned long long i = 2; i <= sqr; i++) {
			sum += (n / i*i) < n ? n / i + 1 : n / i;
			sum += (n % i != 0) ? (last - n / i)*i : (last - n / i + 1)*i; // 나머지 있 : 없
			last = (n / i*i) < n ? n / i : n / i - 1;
		}
	}
	printf("%lld", sum + n + 1);
	return 0;
}