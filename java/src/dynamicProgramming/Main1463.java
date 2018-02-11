package dynamicProgramming;
/*
 * Chae yeon Han
 * 2017/05/12 Baekjoon Question 1463 - 1로 만들기 
 */
import java.util.*;

public class Main1463 {
	public static int[] d;
	
	public static int goToOne(int num)
	{
		
		int temp;
	
		if(num == 1) return 0;
		if(d[num] >= 1) return d[num];
		d[num] = goToOne(num-1) + 1;
		if(num%2 == 0)
		{
			temp = goToOne(num/2) + 1;
			if(d[num] > temp)
				d[num] = temp;
		}
		if(num%3 == 0)
		{
			temp = goToOne(num/3) + 1;
			if(d[num] > temp)
				d[num] = temp;
		}
		return d[num];
		
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		d = new int[num+1];
		System.out.println(goToOne(num));
		
		
	}

}
