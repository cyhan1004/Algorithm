package dataStructure2_Queue_Deque_String;
/*
 * 2017/05/05 Baekjoon Question 10845 - implementing Queue
 */
import java.util.*;

public class Main10845 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int count = sc.nextInt();
		int back = 0;
		
		sc.nextLine();
		Queue<Integer> queue = new LinkedList<Integer>();
		
		while(count-- != 0)
		{
			String[] str = sc.nextLine().split(" ");
			if(str[0].equals("push"))
			{
				back = Integer.parseInt((str[1]));
				queue.offer(back);
			}
			else if(str[0].equals("pop"))
			{
				if(queue.isEmpty())
					System.out.println(-1);
				else
					System.out.println(queue.poll());
			}
			else if(str[0].equals("size"))
			{
				int size = queue.size();
				System.out.println(size);
			}
			else if(str[0].equals("empty"))
			{
				if(queue.isEmpty())
					System.out.println(1);
				else
					System.out.println(0);
			}
			else if(str[0].equals("front"))
			{
				if (queue.isEmpty())
					System.out.println(-1);
				else
				{
					int front = queue.peek();
					System.out.println(front);
				}
			}
			else if(str[0].equals("back"))
			{
				if (queue.isEmpty())
					System.out.println(-1);
				else
					System.out.println(back);
			}
				
		}
		
		
	}

}
