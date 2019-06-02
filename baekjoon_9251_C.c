#include <stdio.h>
#include <string.h>

#define MAX(a,b) a>b ? a:b
#define _CRT_SECURE_NO_WARNINGS
char a[1001], b[1001];
int n, m;
int dp[1001][1001];
int solve(int num1, int num2) {
	if (num1 == n || num2 == m) return 0;
	if (a[num1] == b[num2])
		return 1 + solve(num1 + 1, num2 + 1);

	int ret = 0;
	if (dp[num1][num2] != -1) return dp[num1][num2];
	ret = MAX(solve(num1 + 1, num2), solve(num1, num2 + 1));
	return dp[num1][num2] = ret;
}
int main() {

	scanf("%s %s", a, b);
	n = strlen(a); m = strlen(b);
	memset(dp, -1, sizeof(int) * 1001 * 1001);
	int ret = solve(0, 0);
	printf("%d\n", ret);
}