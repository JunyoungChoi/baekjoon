package baekjoon1110_Java;

import java.util.Scanner;

/*0���� ũ�ų� ����, 99���� �۰ų� ���� ������ �־��� �� ������ ���� ������ �� �� �ִ�.���� �־��� ���� 10���� �۴ٸ� �տ� 0�� �ٿ� �� �ڸ� ���� �����, �� �ڸ��� ���ڸ� ���Ѵ�.�� ����, �־��� ���� ���� ������ �ڸ� ���ڿ� �տ��� ���� ���� ���� ������ �ڸ� ���ڸ� �̾� ���̸� ���ο� ���� ���� �� �ִ�.���� ���� ����.

26���� �����Ѵ�. 2 + 6 = 8�̴�.���ο� ���ڴ� 68�̴�. 6 + 8 = 14�̴�.���ο� ���ڴ� 84�̴�. 8 + 4 = 12�̴�.���ο� ���ڴ� 42�̴�. 4 + 2 = 6�̴�.���ο� ���ڴ� 26�̴�.

���� ���� 4������ ���� ���ڷ� ���ƿ� �� �ִ�.���� 26�� ����Ŭ�� ���̴� 4�̴�.

N�� �־����� ��, N�� ����Ŭ�� ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. */

public class baekjoon1110_Java {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n, num1, num2, count;
		Scanner s = new Scanner(System.in);
		n = s.nextInt();
		num2 = n;
		count = 0;
		while (true) {
			num1 = (num2 % 10) * 10 + (num2 / 10 + num2 % 10) % 10;
			count++;
			if (n == num1) {
				break;
			}
			num2 = num1;
		}
		System.out.printf("%d", count);
	}

}
