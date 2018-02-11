package dynamicProgramming;
/*
 * Chae yeon Han
 * 2017/05/18 Baekjoon Question 11727 - 1,2,3 더하기 -런타임에러 
 */
import java.util.*;

public class Main9095 {
	static int[] d;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		d = new int[110];
		
		d[0] = 1;
		
		/*for(int i = 1; i<= 10; i++)
		{
			if(i-1 >= 0)
				d[i] += d[i-1];
			if(i-2 >= 0)
				d[i] += d[i-2];
			if(i-3 >= 0)
				d[i] += d[i-3];
		}*/
		
		int cnt = sc.nextInt();
		
		sc.nextLine();
		while(cnt-- != 0)
		{
			int num = sc.nextInt();
			sc.nextLine();
			System.out.println(d[num]);
		}
		
		
	}
}


