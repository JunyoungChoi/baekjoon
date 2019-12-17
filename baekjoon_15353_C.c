#include <stdio.h>
int main() {
	int i, j;
	char A[10002] = { '\0', };
	char B[10002] = { '\0', };
	char C[10003] = { '\0', };
	scanf("%s", A);
	scanf("%s", B);
	for (i = 0; i < 10002; i++) {
		if (A[i] == '\0') {
			break;
		}
	}
	for (j = 0; j < 10002; j++) {
		if (B[j] == '\0') {
			break;
		}
	}
	i--;
	j--;
	int c = 0;
	for (int k = 10001; k >= 0; k--) {
		int t1 = 0;
		int t2 = 0;
		if (i>=0) {
			t1 = A[i] - '0';
		}
		if (j>=0) {
			t2 = B[j] - '0';
		}
		if (t1 + t2 + c >= 10) {
			C[k] = (t1 + t2 + c - 10) + '0';
			c = 1;
		}
		else {
			C[k] = (t1 + t2 + c) + '0';
			c = 0;
		}
		i--;
		j--;
	}
	for (int k = 0; k < 10002; k++) {
		if (C[k]!='0') {
			printf("%s", &C[k]);
			break;
		}
	}
	return 0;
}