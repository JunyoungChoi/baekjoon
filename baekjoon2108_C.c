#include<stdio.h>
#include<malloc.h>
int mean(int num[], int n);
int avg(int num[], int n);
void sort(int num[], int n);
int cen(int num[], int n);
void min(int num[], int t);

int main() {
	int n;
	int *num;
	scanf("%d", &n);
	num = (int*)malloc(sizeof(int)*n);
	for (int t = 0; t < n; t++) {
		scanf("%d", &num[t]);
	}
	printf("%d\n", avg(num, n));
	printf("%d\n", cen(num, n));
	min(num, 0);
	printf("%d\n",num[n - 1] - num[0]);
	free(num);
	return 0;
}

int mean(int num[],int n) {
	int sum = 0;
	if (n > 0) {
		sum += num[n-1] + mean(num, n - 1);
	}
	return sum;
}
int avg(int num[], int n) {
	return ((mean(num, n) / (float)n) - (mean(num, n) / n) >= 0.5) ? mean(num, n) / n + 1 : mean(num, n) / n;
}
void sort(int num[], int n) {
	int t;
	for (int a = 0; a < n; a++) {
		for (int b = a + 1; b < n; b++) {
			if (num[a] > num[b]) {
				t = num[b];
				num[b] = num[a];
				num[a] = t;
			}
		}
	}
}

int cen(int num[], int n) {
	sort(num, n);
	return num[n / 2];
}
void min(int num[],int t) {
	int tem = 1;
	for (char a = 1; num[a] == num[a - 1]; a++) {
		tem++;
	}
	if (tem == 1) {
		printf("%d\n", num[0]);
	}
	else {
		printf("%d\n", num[tem]);
	}
}
