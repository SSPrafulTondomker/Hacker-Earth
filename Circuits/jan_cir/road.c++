#include <bits/stdc++.h>
using namespace std;
int dp[100001][51] = {0};
int a1 = -100, b = -100;
int road(int c, int i, int n, int a[], int k, int l)
{
	//cout << n << endl;
    if (k < 0 )
        return -100;

    if (n >= l || i >= l)
        return c;

    if (n < l && k >= 0 && dp[n][k] != 0 )
        return dp[n][k];

    else 
    { 
        if (n > i)
            a1 = road(c+1, n, n, a, k-abs(a[i]-a[n]) ,l); 
            b = road(c, i, n+1, a, k, l);
            dp[n][k] = max(a1,b);
            return dp[n][k];
    }

    return dp[n][k];
}
int main()
{
    int n, k;
    scanf ("%d%d", &n,&k);
    int i;
    int a[n];
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    printf ("%d \n", road(1, 0, 1, a, k, n));
}

