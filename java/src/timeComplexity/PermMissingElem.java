package timeComplexity;
import java.util.*;
/*
 * 07/31/2017 TimeComplexity_PermMissingElem
 * @author Chaeyeon Han
 */

public class PermMissingElem {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = {2,3,1,5};
		System.out.println(solution(arr));
		
	}
	
	public static int solution(int[] A)
	{
		int result = 0;
		int[] arr = new int[A.length+1];
		
		for(int i = 0; i< arr.length; i++)
			arr[i] = 0;
		for(int i = 0; i< A.length; i++)
		{
			arr[A[i]-1]+=1;
		}
		
		for(int i = 0; i< arr.length; i++)
		{
			if(arr[i] == 0)
				result = i+1;
		}
			return result;
	}

}
