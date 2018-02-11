package dataStructure2_Queue_Deque_String;
/*
 * 2017/05/05 Baekjoon Question 1158 - 조세퍼스 
 */
import java.util.*;

public class Main1158 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String[] str = sc.nextLine().split(" ");
		int n = Integer.parseInt(str[0]);
		int m = Integer.parseInt(str[1]);
		Queue<Integer> queue = new LinkedList<Integer>();
		
		for (int i = 0; i<n;i++)
		{
			queue.offer(i+1);
		}
		System.out.print("<");
		for (int i = 0; i< n-1;i++)
		{
			for (int j = 0; j< m-1; j++)
			{
				queue.offer(queue.poll());
			}
			System.out.print(queue.poll() + ", ");
		}
		System.out.println(queue.poll() + ">");
		
		
	}

}
