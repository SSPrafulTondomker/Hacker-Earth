def fact(r) :
	s = 1
	for i in range (1, r+1) :
		s *= i
	return s
def num(n) :
	r = n
	g = 0
	j = 3
	while r > 0 :
		r = (r-j)+1
		#print r
		if r <= 0 :
			break
		g += fact(r)
		r = n
		j += 1
	return pow(2,n) - g
for _ in range (input()) :
	n = input()
	print num(n)
