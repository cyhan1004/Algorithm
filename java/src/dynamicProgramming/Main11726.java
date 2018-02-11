package dynamicProgramming;
/*
 * Chae yeon Han
 * 2017/05/12 Baekjoon Question 11726 - 2xn 타일링 
 */
import java.util.*;

public class Main11726 {
	public static int[] d;
	public static int tilling(int n)
	{
		if(n == 0 || n == 1) d[n] = 1;
		if(d[n] > 0) return d[n];
		d[n] = tilling(n-1) + tilling(n-2);
	
		return d[n] % 10007;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		d = new int[n+1];
		System.out.println(tilling(n));
		
	}

}
