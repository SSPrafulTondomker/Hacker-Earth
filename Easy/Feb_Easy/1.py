def odd_div (n) :
	i = 1
	s = 0
	while i*i <= n :
		if n%i == 0 :
			if i%2 != 0 :
				s += i 
			r = n/i
			if r%2 != 0 && i != r:
				s += r
			#print s, i, r
		i += 1
	
	return s
for _ in range (input()) :
	n = input()
	print odd_div(n)
