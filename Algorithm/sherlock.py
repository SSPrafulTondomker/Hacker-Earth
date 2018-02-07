for _ in range (input()) :
	n,k,p = map(int,raw_input().split())
	l = map(int,raw_input().split())
	f = 0
	c = 0
	for i in range (1,n+1) :
		if i not in l :
			c += 1
		if c == p :
			f = 1
			break
	if f == 0:
	 	print "-1"
	else :
	 	print i

