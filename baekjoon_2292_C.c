#include <stdio.h> 
main(void){
	unsigned long long N;
	unsigned long long ans;
	scanf("%lld", &N);
	for (ans = 0; N > 3 * ans*ans + 3 * ans + 1; ans++);
	printf("%lld", ans + 1);
	return 0;
}