#include<stdio.h>

int main(){
	int K;
	int numbers[100000];
	int idx = 0;
	int ans = 0;
	scanf("%d", &K);
	for (int i = 0; i < K; i++){
		scanf("%d", &numbers[idx]);
		if (numbers[idx] == 0)
			idx--;
		else
			idx++;
	}
	for (int i = 0; i < idx; i++){
		ans += numbers[i];
	}
	printf("%d", ans);
	return 0;
}