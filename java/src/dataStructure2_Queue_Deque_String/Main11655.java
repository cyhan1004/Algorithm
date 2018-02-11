package dataStructure2_Queue_Deque_String;
/*
 * Chae yeon Han
 * 2017/05/08 Baekjoon Question 11655 - 단어 길이 재기 
 */
import java.util.*;

public class Main11655 {
	public static String rot13(String str)
	{
		String answer = "";
		for (int i = 0; i< str.length();i++)
		{
			char ch = str.charAt(i);
			if('A'<=str.charAt(i) && str.charAt(i)<='Z')
			{
				if(str.charAt(i)<='M')
					ch +=  13;
				else
					ch -= 13;
			}
			else if('a'<=str.charAt(i) && str.charAt(i)<='z')
			{
				if(str.charAt(i)<='m')
					ch += 13;
				else
					ch -= 13;
			}
			else{}
			answer += ch;
		}
		return answer;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		System.out.println(rot13(str));

	}

}
