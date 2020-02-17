#include <stdio.h>

double day[101];

int main()

{

	int N; // 몇째날
	int gibun; // 현재 기분
	double gg, gb, bg, bb;
	scanf("%d %d", &N, &gibun);
	day[0] = gibun;
	scanf("%lf %lf %lf %lf", &gg, &gb, &bg, &bb);
	for (int i = 1; i <= N; i++) {
		day[i] = day[i - 1] * bb + (1 - day[i - 1])*gb;
	}
	int ans1 = (day[N] * 1000)+0.5;
	int ans2 = (1 - day[N]) * 1000 + 0.5;
	printf("%d\n%d", ans2,ans1);

}