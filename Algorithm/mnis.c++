#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m;
	scanf ("%d",&t);
	while (t--)
	{
		scanf ("%d%d",&n,&m);
		int x,y,k;
		int a[n+2][n+2],i,j;
		memset (a,0,sizeof(a));
		while (m--)
		{
			scanf ("%d%d",&x,&y);
			a[x][y] = 1;
		}
		//bfs
		int level[n+2],temp,flag=0;
		int mark[n+2];
		memset (level,0,sizeof(level));
		memset (mark,0,sizeof(mark));
		queue <int> q;
		q.push (1);
		level[1] = 1;
		int s=0;
		while (!q.empty())
		{
			//cout << q.front()<<endl;
			temp = q.front();
			mark[temp] = 1;
			q.pop();
			//cout<<q.front();
			for (i = temp ; i <= n ; i++)
			{
				for (j = 1 ; j <= n ; j++)
				{
					if (mark[j] == 0 && a[i][j] == 1){
						q.push(j);
						s += 1;
						if (j == n)
							flag = 1;
					}
				}
				if (flag == 1)
					break;
			}
			if (flag == 1)
				break;
		}
		cout << s << endl;
	 }
}

		
