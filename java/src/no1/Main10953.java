package no1;
import java.util.*;

public class Main10953 {
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt();
		sc.nextLine();
		while(cnt-- != 0)
		{
			String Str = sc.nextLine();
			String[] str = Str.split(",");
			
			int a = Integer.parseInt(str[0]);
			int b = Integer.parseInt(str[1]);
			
			System.out.println(a+b);
		}
	}
}
