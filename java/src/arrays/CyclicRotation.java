package arrays;
import java.util.*;

/*
 * 07/27/2017 Arrays_CyclicRotation
 * @author Chaeyeon Han
 *
 */

public class CyclicRotation {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = {}; //test
		System.out.println(solution(arr, 1));
		
	}

	
	public static int[] solution(int[] A, int K)
	{
		int[] arr = A;
		int count = K;
		if (arr.length == 0)
			return arr;
		
		Queue<Integer> queue = new LinkedList<Integer>();
		
		for(int i = arr.length - 1; i >= 0; i--)
			queue.add(arr[i]);
		
		for(int i = 0; i< count; i++)
		{
			int temp = queue.poll();
			queue.add(temp);
		}
		
		for(int i = arr.length - 1; i >= 0; i--)
		{
			int temp = queue.poll();
			arr[i] = temp;
		}
		
		return arr;
	}
}
