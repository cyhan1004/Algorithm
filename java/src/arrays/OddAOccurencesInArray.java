package arrays;
import java.util.*;
/*
 * 07/28/2017 Arrays_OddOccurenceInArray
 * @author Chaeyeon Han
 */

public class OddAOccurencesInArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = {9,3,9,3,9,7,9};
		System.out.println(solution(arr));
		
	}
	
	public static int solution(int[] A)
	{
		int[] arr = A;
		int value;
		int result = 0;
		
		Map<Integer, Integer> map = new HashMap<Integer,Integer>();
		int unpaired = 0;
		
		for(int i = 0; i< arr.length;i++)
		{
			if(map.get(arr[i]) == null)
				value = 0;
			else
				value = map.get(arr[i]);
			map.put(arr[i], value + 1);
		}
		
		for(Map.Entry<Integer, Integer> entry : map.entrySet())
		{
			if(entry.getValue() % 2 != 0)
				result = entry.getKey();
		}
		
		return result;
	}

}
