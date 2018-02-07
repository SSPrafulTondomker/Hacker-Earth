#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, q;
	scanf ("%d%d",&n,&q);
	int l[n], i;
	for (i = 0; i < n; i++)
		scanf ("%d", &l[i]);
	int y, z;
	char d;

	while (q--)
	{
		scanf ("%d%d ",&y, &z);
		scanf ("%c", &d);
		
		if (int(d) == 76)
		{
			i = 0;
			while (i < n) 
			{
				if (l[y] == z)
					break;
				i += 1;
				y -= 1;
				if (y == -1)
					y = n-1;
			}
			if (i == n)
				printf ("-1 \n");
			else 
				printf ("%d \n",i);
		}
		else 
		{
			i = 0;
			while (i < n)
			{
				if (l[y] == z)
					break;
				i += 1;
				y += 1;
				if (y == n) 
					y = 0;
			}
			if (i == n)
				printf ("-1 \n");
			else 
				printf ("%d\n",i);
		}
	}
	return 0;
}
