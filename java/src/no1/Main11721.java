package no1;
/*
 * 2017/05/05 Baekjoon Question 11721 - 열 개씩 끊어 출력하기 
 */
import java.util.*;

public class Main11721 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		String[] str = sc.nextLine().split("");
		for (int i = 0; i< str.length;i++)
		{
			if (i%10 == 0 && i != 0)
				System.out.println();
			System.out.print(str[i]);
		}
	}

}
