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
		if ((p[i].x >= X - (H / 2) && p[i].x <= X + W + (H / 2)) && (p[i].y <= Y + H && p[i].y >= Y)) {
			if (p[i].x < X) {
				if (sqrt(pow(X - p[i].x, 2) + pow((Y + (H / 2) - p[i].y) > 0 ? Y + (H / 2) - p[i].y : p[i].y - Y - (H / 2), 2)) > H / 2) {
					printf("1 안추가 %f %f %f\n", X - p[i].x, Y + (H / 2) - p[i].y > 0 ? Y + (H / 2) - p[i].y : p[i].y - Y - (H / 2) , sqrt(pow(X - p[i].x, 2) + pow((Y + (H / 2) - p[i].y) > 0 ? Y + (H / 2) - p[i].y : p[i].y - Y - (H / 2), 2)));

				}
				else {
					ans++;
					printf("1 추가 %f %f %f\n", X - p[i].x, Y + (H / 2) - p[i].y > 0 ? Y + (H / 2) - p[i].y : p[i].y - Y - (H / 2), sqrt(pow(X - p[i].x, 2) + pow((Y + (H / 2) - p[i].y) > 0 ? Y + (H / 2) - p[i].y : p[i].y - Y - (H / 2), 2)));

				}
			}
			else if (p[i].x > X + W) {
				if (sqrt(pow(p[i].x - X - W, 2) + pow((Y + (H / 2) - p[i].y) > 0 ? Y + (H / 2) - p[i].y : p[i].y - Y - (H / 2), 2)) > H / 2) {
					printf("2 안추가 %f %f %f\n", p[i].x - X - W, Y + (H / 2) - p[i].y > 0 ? Y + (H / 2) - p[i].y : p[i].y - Y - (H / 2), sqrt(pow(p[i].x - X - W, 2) + pow((Y + (H / 2) - p[i].y) > 0 ? Y + (H / 2) - p[i].y : p[i].y - Y - (H / 2), 2)));

				}
				else {
					ans++;
					printf("2 추가 %f %f %f\n", p[i].x - X - W, Y + (H / 2) - p[i].y > 0 ? Y + (H / 2) - p[i].y : p[i].y - Y - (H / 2), sqrt(pow(p[i].x - X - W, 2) + pow((Y + (H / 2) - p[i].y) > 0 ? Y + (H / 2) - p[i].y : p[i].y - Y - (H / 2), 2)));
				}
			}
			else {
				if (p[i].y >= Y && p[i].y <= Y + H) {
					ans++;
					printf("3 추가\n");
				}
			}
		}
		
	}
	printf("%d", ans);
	return 0;
}