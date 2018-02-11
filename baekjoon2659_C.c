#include<stdio.h>

int _min(int a, int b) {
	if (a < b)
		return a;
	else
		return b;
}
int _4sum(int a, int b, int c, int d) {
	return 1000 * a + 100 * b + 10 * c + d;
}
int ck_num(int a, int b, int c, int d) {
	int tmp1 = _4sum(a, b, c, d);
	int tmp2 = _4sum(b, c, d, a);
	int tmp3 = _4sum(c, d, a, b);
	int tmp4 = _4sum(d, a, b, c);
	return _min(_min(_min(tmp1, tmp2), tmp3), tmp4);
}
main() {
	int num[1000] = { 0, };
	int a, b, c, d, ck, tmp;
	int count = 1;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	ck = ck_num(a, b, c, d);
	for (a = 1; a < 10; a++) {
		for (b = 1; b < 10; b++) {
			for (c = 1; c < 10; c++) {
				for (d = 1; d < 10; d++) {
					if (ck_num(a, b, c, d) < ck) {
						for (tmp = 0; num[tmp] != 0; tmp++) {
							if (ck_num(a, b, c, d) == num[tmp]) {
								break;
							}

						}
						if (num[tmp] == 0) {
							num[tmp] = ck_num(a, b, c, d);
							count++;
						}
					}
				}
			}
		}
	}
	printf("%d", count);
}