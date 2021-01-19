#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int cnt = 1;
	int temp = N;
	while (temp / 10 > 0) {
		temp /= 10;
		cnt++;
	}
	for (int i = N - (cnt - 1) > 0 ? cnt - 1 : 1 * 9; i <= N; i++) {
		if (i < 1) continue;
		char str[8];
		sprintf(str, "%d", i);
		int sum = i;
		for (int j = 0; str[j] != '\0'; j++) {
			sum += (int)(str[j] - '0');
		}
		if (sum == N) {
			cout << i;
			break;
		}
		else if (i == N)
			cout << 0;
	}
	return 0;
}