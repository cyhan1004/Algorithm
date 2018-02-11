package dataStructure1_Stack;
/*
 * 2017/05/04 Baekjoon Question 9012 - Parenthesis
 */
import java.util.*;

public class Main9012 {
	public static String getResult(String str)
	{
		str = str.trim();
		int cnt = 0;
		for (int i = 0; i<str.length();i++)
		{
			if (str.charAt(i) == '(')
				cnt++;
				
			else
				cnt--;
				
			if (cnt < 0)
				return "NO";
				
		}
		
		if (cnt == 0)
			return "YES";
		else
			return "NO";
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		sc.nextLine();
		
		while (num-- > 0)
		{
			String str = sc.nextLine();
			System.out.println(getResult(str));
		}
	}
}
