package dataStructure2_Queue_Deque_String;
/*
 * 2017/05/06 Baekjoon Question 10820 - 문자열 분석 
 */
import java.util.*;

public class Main10820 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextLine())
		{
			int lower_case = 0;
			int upper_case = 0;
			int number = 0;
			int blank = 0;
			
			String str = sc.nextLine();
			for (int i = 0; i< str.length();i++)
			{
				if (65 <= str.charAt(i) && str.charAt(i) <= 90)
					upper_case += 1;
				else if(97 <= str.charAt(i) && str.charAt(i) <= 122)
					lower_case += 1;
				else if((9 <= str.charAt(i)&& str.charAt(i) <= 13) || str.charAt(i) == 32)
					blank += 1;
				else if(48 <= str.charAt(i) && str.charAt(i) <= 57)
					number += 1;
			}
			System.out.println(lower_case + " " + upper_case + " " + number + " " + blank);
		}
	}

}
