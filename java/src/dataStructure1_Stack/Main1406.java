package dataStructure1_Stack;
/*
 * 2017/05/05 Baekjoon Question 1406 - editor
 */
import java.util.*;
import java.io.*;

public class Main1406 {

	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = br.readLine();
		Stack<Character> stack_left = new Stack<Character>();
		Stack<Character> stack_right = new Stack<Character>();
		
		for (int i = 0; i<str.length();i++)
		{
			stack_left.push(str.charAt(i));
		}
		
		int cnt = Integer.parseInt(br.readLine());
		
		for (int i = 0; i< cnt; i++)
		{
			String[] Line = br.readLine().split(" ");
			char what = Line[0].charAt(0);
			
			if (what == 'P')
			{
				stack_left.push(Line[1].charAt(0));
			}
			else if(what == 'L')
			{
				if (!stack_left.empty())
					stack_right.push(stack_left.pop());

			}
			else if(what == 'D')
			{
				if (!stack_right.empty())
					stack_left.push(stack_right.pop());

			}
			else if(what == 'B')
			{
				if(!stack_left.empty())
					stack_left.pop();
			}
		}
		
		while (!stack_left.empty())
			stack_right.push(stack_left.pop());

		
		while (!stack_right.empty())
		{
			System.out.print(stack_right.pop());
			
		}
		System.out.println();
	}
	
}
