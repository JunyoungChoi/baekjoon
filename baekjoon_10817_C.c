#include <stdio.h>
main()
{
	unsigned char A,B,C,ans;
	scanf("%d %d %d", &A, &B, &C);
	if ((A >= B && C >= A) || (A>=C && B>=A))
		ans = A;
	else if ((B <= A && B >= C) ||(B>=A && B<=C))
		ans = B;
	else 
		ans = C;
	printf("%d", (unsigned int)ans);
	return 0;
}
