# include <stdio.h>

void main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	printf("%d", (y > h - y ? h - y : y) > (x > w - x ? w - x : x) ? (x > w - x ? w - x : x) : (y > h - y ? h - y : y));
	return;
}
