#include <stdio.h>
#include <string.h>

int main() {
	char k[8][4] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	char s[101];
	char *ptr;
	int cnt, len, cnt_dz = 0;
	scanf("%s", s);
	len = strlen(s);
	for (int i = 0; i < 8; i++) {
		cnt = 0;
		if (strstr(s, k[i])) {
			ptr = s;
			while (strstr(ptr, k[i]) != 0) {
				if (i == 2)
					cnt_dz++;
				ptr = strstr(ptr, k[i]);
				cnt++;
				ptr += 1;
			}
			len -= cnt*(strlen(k[i]) - 1);
		}
	}
	printf("%d", len+cnt_dz);
	return 0;
}