package dataStructure1_Stack;
/*
 * 2017/05/05 Baekjoon Question 10799 - 쇠막대기 
 */
import java.util.*;

public class Main10799 {

	public static int getResult(String str)
	{
		Stack<Integer> stack = new Stack<Integer>();
		int total = 0;
		
		for(int i = 0; i< str.length();i++)
		{
			if(str.charAt(i) == '(')
			{
				stack.push(i);
			}
			else
			{
				if (stack.peek() +1 == i)
				{
					stack.pop();
					total += stack.size();
				}
				
				else
				{
					stack.pop();
					total += 1;
				}
			}
		}
		return total;
		
	}

	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine().trim();
		
		System.out.println(getResult(str));
	}

}
