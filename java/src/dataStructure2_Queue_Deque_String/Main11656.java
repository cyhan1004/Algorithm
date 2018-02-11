package dataStructure2_Queue_Deque_String;
/*
 * Chae yeon Han
 * 2017/05/08 Baekjoon Question 11656 - 접미사 배열 
 */
import java.util.*;

public class Main11656 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub	
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		String[] arr = new String[str.length()];
		for(int i = 0; i< str.length(); i++)
		{
			arr[i] = str.substring(i);
		}
		Arrays.sort(arr);
		for(int i = 0; i< arr.length;i++)
			System.out.println(arr[i]);
		
	}

}
