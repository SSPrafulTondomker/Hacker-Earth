def val(n) :
	s = 0
	l = []
	while n != 0 :
		k = n%10
		if k != 0 :
			s += pow (k,k)
		if k != 0 :
			l.append(k)
		n /= 10
	for i in l :
		if s%i != 0 :
			return -1
	return s
for _ in range (input()) :
	l, r = map(int, raw_input().split())
	c = 0
	for i in range (l, r+1) :
		k = val(i)
		if k != -1 :
			c += 1
			#print val(i),i
	print c
