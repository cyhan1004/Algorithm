package dataStructure2_Queue_Deque_String;
/*
 * 2017/05/06 Baekjoon Question 10866 - Deque 
 */
import java.util.*;

public class Main10866 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		ArrayDeque<Integer> deque = new ArrayDeque<Integer>();

		int count = sc.nextInt();
		sc.nextLine();
		
		while(count-- != 0)
		{
			String[] str = sc.nextLine().split(" ");
			if(str[0].equals("push_front"))
			{
				deque.offerFirst(Integer.parseInt(str[1]));
			}
			else if(str[0].equals("push_back"))
			{
				deque.offerLast(Integer.parseInt(str[1]));
			}
			else if(str[0].equals("pop_front"))
			{
				if(deque.isEmpty())
					System.out.println(-1);
				else
				{
					System.out.println(deque.pollFirst());
				}
			}
			else if(str[0].equals("pop_back"))
			{
				if(deque.isEmpty())
					System.out.println(-1);
				else
				{
					System.out.println(deque.pollLast());
				}
			}
			else if(str[0].equals("size"))
			{
				System.out.println(deque.size());
			}
			else if(str[0].equals("empty"))
			{
				if(deque.isEmpty())
					System.out.println(1);
				else
					System.out.println(0);
			}
			else if(str[0].equals("front"))
			{
				if(deque.isEmpty())
					System.out.println(-1);
				else
					System.out.println(deque.peekFirst());
			}
			else if(str[0].equals("back"))
			{
				if(deque.isEmpty())
					System.out.println(-1);
				else
					System.out.println(deque.peekLast());
			}
			else{}
		}
		
	}

}
