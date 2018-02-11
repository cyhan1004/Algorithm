package timeComplexity;
import java.math.*;
/*
 * 07/31/2017 TimeComplexity_TapeEquilibrium
 * @author Chaeyeon Han
 */
public class TapeEquilibrium {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int[] arr = {3,1,2,4,3};
		System.out.println(solution(arr));
	}

	public static int solution(int A[])
	{
		int result1 = 0, result2 = 0, sum = 0, min = 0;
		int N = A.length;
		
		for(int i = 0; i< N;i++)
		{
			sum += A[i];
		}
		for (int i = 1; i< N;i++)
		{
			result1 += A[i-1];
			result2 = sum-result1;
			int sub = Math.abs(result1 - result2);
			if(i == 1 ||min > sub)
				min = sub;
		}
		
		return min;
	}
}
