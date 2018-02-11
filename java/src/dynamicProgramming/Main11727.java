package dynamicProgramming;
/*
 * Chae yeon Han
 * 2017/05/12 Baekjoon Question 11727 - 2xn 타일링 2
 */
import java.util.*;

public class Main11727 {
	public static int[] d;
	public static int tilling(int n)
	{
		d[0] = 1;
		d[1] = 1;
		
		for(int i = 2; i<=n; i++)
		{
			d[i] = d[i-1] + 2*d[i-2];
			d[i] %= 10007;
		}
		
	
		return d[n];
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		d = new int[n+1];
		System.out.println(tilling(n));
		
	}

}
