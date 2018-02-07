def minRoad(c, i, n, k, l, dp) :
    if k < 0 :
        return c-1
    if n > 9 or i > 9:
        return c
    
    if n>= 0 and n < len(l) and k >= 0 and k <= 50 and dp[n][k] != 0 :
        return dp[n][k]
    else :
	if i <= 9 and n <= 9 :
	        dp[n][k] = max(minRoad(c+1, n, n+1, k-abs(l[i]-l[n]), l, dp), minRoad(c, i, n+1, k, l, dp))
        	return dp[n][k]
    return dp[n][k]
    

n, k = map(int, raw_input().split())
u = map(int, raw_input().split())
l = [0]
for i in u :
	l.append(i)
r, dp = [], []
for i in range (60) :
    r.append(0)
for i in range (105) :
    dp.append(r)
print minRoad( 0, 1, 2, k, l, dp)+1

for i in range (9) :
	s = ""
	for j in range (11) :
		s += str(dp[i][j])
	print s
