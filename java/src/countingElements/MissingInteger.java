package countingElements;
import java.util.*;
public class MissingInteger {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = {1,3,6,4,1,2};
		System.out.println(solution(arr));

	}
	
	public static int solution(int[] A)
	{
		Map<Integer, Integer> map = new HashMap<Integer, Integer>();
		
		for(int i = 0; i<A.length; i++)
		{
			if(map.get(A[i]) == null)
				map.put(i, A[i]);
		}
		int i = 1;
		System.out.println(map);
		while(true)
		{
			if(map.get(i) == null)
				return i;
			i++;
		}

	}

}
