import java.util.Scanner;

public class rotation
{
	public static void main (String []args)
	{
		int t,n,k,i,mod;
		Scanner Scan = new Scanner(System.in);
		t = Scan.nextInt();
		while (t > 0)
		{
			n = Scan.nextInt();
			k = Scan.nextInt();
			int arr[] = new int [n];
			for (i = 0 ; i < n ; i++)
				arr[i] = Scan.nextInt();
			mod = k%n;
			System.out.println(" ");
			for (i = n-1 ; mod > 0 ; i--)
			{
				System.out.print (arr[i] + " ");
				mod -= 1;
			}
			mod = k%n;
			for (i = 0 ; i < n-mod ; i++)
				System.out.print (arr[i] + " ");
			t -= 1;
		}
	}
}



