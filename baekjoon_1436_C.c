#include <stdio.h>
#include<string.h>
char trans[8]="\0\0\0\0\0\0\0\0";	// 가려는 채널을 문자열로 바꿈
void d_to_s(long long N) {

	trans[0] = (char)(N / 1000000) + '0';
	N -= N / 1000000 * 1000000;
	trans[1] = (char)(N / 100000) + '0';
	N -= N / 100000 * 100000;
	trans[2] = (char)(N / 10000) + '0';
	N -= N / 10000 * 10000;
	trans[3] = (char)(N / 1000) + '0';
	N -= N / 1000 * 1000;
	trans[4] = (char)(N/100) + '0';
	N -= N / 100 * 100;
	trans[5] = (char)(N/10) + '0';
	N -= N / 10 * 10;
	trans[6] = (char)N + '0';
}
int main() {
	int N,count=0;
	unsigned long long i = 0;
	scanf("%d", &N);
	for (i = 666;; i++) {
		d_to_s(i);
		if (strstr(trans, "666") != 0) {
			count++;
		}
		if (count == N)
			break;
	}
	printf("%lld", i);
	return 0;
}

