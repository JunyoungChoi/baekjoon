#include <stdio.h> 
main(void)
{
	unsigned char a[100];
	int ans[26] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	scanf("%s", a);

	for (int i = 0; ; i++) {
	if (a[i] == '\0')
		break;
	ans[a[i] - 'a'] = (ans[a[i] -'a'] == -1) ? i : ans[a[i] - 'a'];
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", ans[i]);
	}
	return 0;
}