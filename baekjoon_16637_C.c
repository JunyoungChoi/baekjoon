#include <stdio.h>
int main() {
	char expression[21] = { '+', };	// 식
	char num[10] = { '\0', };	// 1,0 으로 괄호 표현
	int N;
	int divide_Num = 1;
	int answer = -(1 << 31);
	scanf("%d", &N);
	for (int i = 0; i < N / 2; i++) {
		divide_Num *= 2;
	}
		scanf("%s", &expression[1]);
	while (--divide_Num >= 0) {
		int q = divide_Num;
		int r = 0;
		char pro = 0;
		for (int i = 0; i < N/2; i++) {
			r = q % 2;
			num[i] = r+'0';
			q /= 2;
			if (i > 0) {
				if (num[i - 1]=='1' && r==1) {
					pro = 1;
				}
			}
			if (pro) break;
		}

		//printf("%d\n", divide_Num);
		if (pro) {
			continue;
		}
		else {
			//solution
			//printf("%s\n", num);
			//printf("%s\n", expression);
			int t = solution(expression, num, N / 2 + 1);
			if (answer < t) {
				answer = t;
			}
		}

	}
	printf("%lld", answer);
	return 0;
}

int solution(char expression[], char num[], int N) {
	int result = 0;
	int tem;
	for (int i = 0; i < N-1; i++) {
		if (num[i] == '1') {
			int num1 = expression[i * 2 + 1]-'0';
			int num2 = expression[(i + 1) * 2 + 1]-'0';
			switch (expression[i * 2 + 2]) {
				case '+':
					tem = num1 + num2;
					break;
				case '-':
					tem = num1 - num2;
					break;
				case '*':
					tem = num1 * num2;
					break;
			}
			switch (expression[i * 2]) {
				case '+':
					result += tem;
					break;
				case '-':
					result -= tem;
					break;
				case '*':
					result *= tem;
					break;
			}
			i++;
		}

		else if (num[i] == '0') {
			switch (expression[i * 2]) {
				case '+':
					result += expression[i * 2 + 1] - '0';
					break;
				case '-':
					result -= expression[i * 2 + 1] - '0';
					break;
				case '*':
					result *= expression[i * 2 + 1] - '0';
					break;
			}
		}
	}
	if (num[N - 2] == '0') {
		switch (expression[(N-1) * 2]) {
		case '+':
			result += expression[(N - 1) * 2 + 1] - '0';
			break;
		case '-':
			result -= expression[(N - 1) * 2 + 1] - '0';
			break;
		case '*':
			result *= expression[(N - 1) * 2 + 1] - '0';
			break;
		}
	}
	/*printf("result : %d\n", result);
	printf("%s\n", expression);
	printf("%s\n", num);*/
	return result;
}