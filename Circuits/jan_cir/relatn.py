n, k = map(int, raw_input().split())
if n <= k or k == "1":
	print "0"
else :
	t = 0
	i = 0
	while i < n :
		t += 1
		i += k
	if n%k != 0 :
		r = n%k
	print r*(t*(t-1)/2)+(k-r)*((t-2)*(t-1)/2)



