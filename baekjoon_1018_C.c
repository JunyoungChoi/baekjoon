#include <stdio.h>

int main() {
	int odd_B, odd_W, even_W, even_B;
	int N, M, sum,ans=64;
	char chess[50][50];
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%s", chess[i]);
	}
	for (int i = 0; i < N-7; i++) {
		for (int j = 0; j < M-7; j++) {
			even_W = 0;
			even_B = 0;
			odd_B = 0;
			odd_W = 0;
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					
					if ((l + k) % 2) { // �汝鶬�
						if (chess[i + k][j + l] == 'W') {
							odd_W++;
						}
						else if (chess[i + k][j + l] == 'B') {
							odd_B++;
						}
					}

					else {		//礎熱還
						if (chess[i + k][j + l] == 'W') {
							even_W++;
						}
						else if(chess[i + k][j + l] == 'B') {
							even_B++;
						}
					}
				}
			}
			sum = (even_B + odd_W) < (even_W + odd_B) ? even_B + odd_W : even_W + odd_B;
			ans = ans < sum ? ans : sum;
		}
	}
	printf("%d", ans);
	return 0;
}