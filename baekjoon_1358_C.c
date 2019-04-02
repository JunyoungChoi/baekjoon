#include <stdio.h> 
#include <math.h>
typedef struct player {
	int x, y;
}p;
int main(void)
{
	float W, H, X, Y, P;
	unsigned int ans = 0;
	p p[300];
	scanf("%f %f %f %f %f", &W, &H, &X, &Y, &P);
	for (unsigned char i = 0; i < P; i++) {
		scanf("%d %d", &p[i].x, &p[i].y);
		if ((p[i].x >= X && p[i].x <= X + W && p[i].y <= Y + H && p[i].y >= Y)) {
			ans++;
		}
		else {
			sqrt(pow((p[i].x <= X) ? X-p[i].x : (p[i].x - W-X), 2) + pow((p[i].y > Y + H / 2) ? p[i].y - Y - H / 2 : Y + H / 2 - p[i].y, 2)) <= H / 2 ? ans++ : 0;
		}
	}
	printf("%d", ans);
	return 0;
}