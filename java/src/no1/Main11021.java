package no1;
import java.util.*;

public class Main11021 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt();
		sc.nextLine();
		int cntNum = 0;
		while(cnt-- != 0)
		{
			cntNum++;
			int a = sc.nextInt();
			int b = sc.nextInt();
			System.out.println("Case #"+cntNum+": "+(a+b));
		}
		

	}

}
