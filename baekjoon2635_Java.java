package baekjoon2635_Java;

import java.util.Scanner;

/*  다음과 같은 규칙에 따라 수들을 만들려고 한다.

첫 번째 수로 양의 정수가 주어진다.
두 번째 수는 양의 정수 중에서 하나를 선택한다.
세 번째부터 이후에 나오는 모든 수는 앞의 앞의 수에서 앞의 수를 빼서 만든다.예를 들어, 세 번째 수는 첫 번째 수에서 두 번째 수를 뺀 것이고, 네 번째 수는 두 번째 수에서 세 번째 수를 뺀 것이다.
음의 정수가 만들어지면, 이 음의 정수를 버리고 더 이상 수를 만들지 않는다.
첫 번째 수로 100이 주어질 때, 두 번째 수로 60을 선택하여 위의 규칙으로 수들을 만들면 7개의 수들 100, 60, 40, 20, 20, 0, 20이 만들어진다.그리고 두 번째 수로 62를 선택하여 위의 규칙으로 수들을 만들면 8개의 수들 100, 62, 38, 24, 14, 10, 4, 6이 만들어진다.위의 예에서 알 수 있듯이, 첫 번째 수가 같더라도 두 번째 수에 따라서 만들어지는 수들의 개수가 다를 수 있다.

입력으로 첫 번째 수가 주어질 때, 이 수에서 시작하여 위의 규칙으로 만들어지는 최대 개수의 수들을 구하는 프로그램을 작성하시오.최대 개수의 수들이 여러 개일 때, 그중 하나의 수들만 출력하면 된다. */

public class baekjoon2635_Java {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int num1,num2,temp,count;
		count=2;
		System.out.print("첫번째 양수를 입력하세요 : ");
		num1=s.nextInt();
		System.out.print("두번째 양수를 입력하세요 : ");
		num2=s.nextInt();
		System.out.print(num1+"   "+num2+"   ");
		while(true) {
			temp=num1-num2;
			num1=num2;
			num2=temp;
			if(temp>=0) {
				System.out.print(temp+"   ");
			}
			else {
				break;
			}
			count++;
		}
		System.out.println("\n"+count);
	}

}
