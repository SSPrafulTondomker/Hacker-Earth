n = input()
s = map(int,raw_input().split())
s.sort()
for _ in range (input()) :
	k = input()
	f = 0
	c = 0
	for i in s :
		if i <= k :
			f += i
			c += 1
		else :
			break
	print c,f
