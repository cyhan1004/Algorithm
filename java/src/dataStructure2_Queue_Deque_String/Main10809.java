package dataStructure2_Queue_Deque_String;
/*
 * 2017/05/06 Baekjoon Question 10809 - 알파벳 찾기  
 */
import java.util.*;

public class Main10809 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		int[] arr_ascii = new int[26];

		for (int i = 0; i<arr_ascii.length;i++)
		{
			arr_ascii[i] = -1;
		}
		
		for(int i = 0; i< str.length();i++)
		{
			if(arr_ascii[str.charAt(i) - 'a'] == -1)
				arr_ascii[str.charAt(i) - 'a'] += (i+1);
		}
		for (int i = 0; i<arr_ascii.length;i++)
		{
			System.out.print(arr_ascii[i] + " ");
		}
		System.out.println();
		
	}

}
