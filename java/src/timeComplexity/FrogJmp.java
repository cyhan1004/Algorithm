package timeComplexity;
/*
 * 07/31/2017 TimeComplexity_FrogJmp
 * @author Chaeyeon Han
 */
public class FrogJmp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(solution(10,85,30));

	}

	
	public static int solution(int X, int Y, int D)
	{
		if((Y-X) % D == 0)
			return (Y-X)/D;
		else
			return (Y-X)/D + 1;
	}
}
