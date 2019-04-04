#include <stdio.h> 

unsigned char num[10] = { 6,7,8,9,0,1,2,3,4,5 };
unsigned char alp[12] = { 'I','J','K','L','A','B','C','D','E','F','G','H' };


main(void)
{	
	unsigned long long N;
	scanf("%lld", &N);
	printf("%c%d", alp[N % 12],num[N%10]);
	return 0;
}