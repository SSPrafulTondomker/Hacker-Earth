n, m = map(int, raw_input().split())
l, r, c = [], [], []
for i in range (m) :
	r = map(int, raw_input().split())
	l.append(r)

for i in range (m) :
	p = 0
	for j in range (n) :
		if l[i][j] == 1 :
			p += 1
	c[i] = p


