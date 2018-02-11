package dataStructure2_Queue_Deque_String;
/*
 * Chae yeon Han
 * 2017/05/08 Baekjoon Question 10824 - 네 수 
 */
import java.util.*;

public class Main10824 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int d = sc.nextInt();
		
		String A = String.valueOf(a);
		String B = String.valueOf(b);
		String C = String.valueOf(c);
		String D = String.valueOf(d);
		
		A = A + B;
		C = C + D;
		
		long x = Long.valueOf(A);
		long y = Long.valueOf(C);
		
		System.out.println(x+y);
	}

}
