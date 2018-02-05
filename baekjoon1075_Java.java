package baekjoon1075_Java;

import java.util.Scanner;

public class baekjoon1075_Java {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int ans, N, F;
		N = s.nextInt();
		F = s.nextInt();
		N = (N / 100) * 100;
		for (ans = 0; ans < 100; ans++) {
			if ((N + ans) % F == 0) {
				break;
			}
		}
		System.out.printf("%02d", ans);
	}

}
