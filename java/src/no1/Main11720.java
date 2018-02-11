package no1;
/*
 * 2017/05/05 Baekjoon Question 11720 - 숫자의 합 
 */
import java.util.*;

public class Main11720 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int total = 0;
		int count = sc.nextInt();
		sc.nextLine();
		String[] Str = sc.nextLine().split("");
		for (int i = 0; i< Str.length;i++)
		{
			total += Integer.parseInt(Str[i]);
		}
		
		System.out.println(total);
	}

}
