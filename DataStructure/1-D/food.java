import java.util.*;

public class food
{
	public static void main (String []args)
	{
		int q;
		Scanner Scan = new Scanner(System.in);
		q = Scan.nextInt();
		Stack arr = new Stack();
		while (q > 0)
		{
			int a,b;
			a = Scan.nextInt();
			if (a == 1)
			{
				if (arr.empty() == true)
				{
					System.out.println("No Food");
				}
				else
				{
					System.out.println(arr.pop());
				}
			}
			else
			{
				b = Scan.nextInt();
				arr.push(new Integer(b));
			}
			q -= 1;
		}
	}
}


