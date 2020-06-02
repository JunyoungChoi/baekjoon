#include<stdio.h>

void main(){
	int N, h;
	int height[100000];
	int ans = 0;
	int pre_height = 0;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++){
		scanf_s("%d", &h);
		height[i] = h;
	}
	for (int i = N - 1; i >= 0; i--){
		if (pre_height < height[i])
		{
			ans++;
			pre_height = height[i];
		}
	}
	printf("%d", ans);
}