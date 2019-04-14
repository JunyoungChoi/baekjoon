#include <stdio.h>
#include<string.h>
char trans[7];	// 가려는 채널을 문자열로 바꿈
void d_to_s(long long N) {

	trans[0] = (char)(N / 100000) + '0';
	N -= N / 100000 * 100000;
	trans[1] = (char)(N / 10000) + '0';
	N -= N / 10000 * 10000;
	trans[2] = (char)(N / 1000) + '0';
	N -= N / 1000 * 1000;
	trans[3] = (char)(N / 100) + '0';
	N -= N / 100 * 100;
	trans[4] = (char)(N / 10) + '0';
	N -= N / 10 * 10;
	trans[5] = (char)N + '0';
}
int main() {
	long long N; // 가려는 채널
	int M;	// 고장난 버튼 갯수
	int j,jari;
	long long ans;
	char bro_but[11]="\0\0\0\0\0\0\0\0\0\0\0";
	scanf("%lld", &N);
	scanf("%d", &M);
	ans = N - 100 < 0 ? 100 - N:N-100;
	for (int i = 0; i < M; i++) {
		scanf("%d", &bro_but[i]);
		bro_but[i] += '0';
	}
	if (M == 10) {
		ans = N - 100 > 0 ? N - 100 : 100 - N;
		printf("%lld", ans);
		return 0;
	}

	if (N == 0) {
		if (strchr(bro_but, '0') == 0) {
			ans = 1;
			printf("%lld", ans);
			return 0;
		}
		else {
			for (int i = 1; i <= 9; i++) {
				if (strchr(bro_but, i + '0') == 0) {
					ans = i + 1;
					printf("%lld", ans);
					return 0;
				}
			}
		}

	}
	for (unsigned long long i = 1; i <= 999999; i++) {
		d_to_s(i);
		long long sum = 2000000;
		for (j = 0; trans[j] == '0'; j++);
		jari = 6 - j;
		
		while (1) {
			if (j == 6) {
				sum = (trans[0]-'0') * 100000 + (trans[1] - '0') * 10000 + (trans[2] - '0') * 1000 + (trans[3] - '0') * 100 + (trans[4] - '0') * 10 + (trans[5] - '0');
				break;
			}
			if (strchr(bro_but, trans[j]) != 0) {
				break;
			}


			j++;
		}
		sum = sum >= N ? sum - N +jari: N - sum+jari; 
		ans = sum < ans ? sum : ans;
		
	}
	printf("%d", ans);
	return 0;
}

