# include <stdio.h>
int main() {
	int N[1001];
	scanf("%d", &N[0]);
	for (int i = 1; i <= N[0]; i++) 
		scanf("%d", &N[i]);
	for (int i = 1; i <= N[0]; i++) {
		for (int j = i + 1; j <= N[0]; j++) {
			if (N[i] > N[j]) {
				int tem;
				tem = N[i];
				N[i] = N[j];
				N[j] = tem;
			}
		}
		printf("%d\n", N[i]);
	}

	return 0;
}
