n, q = map(int, raw_input().split())
l = map(int, raw_input().split())
r = []
for i in range(200001) :
	r.append(0)
for i in range (n) :
	r[l[i]] = i

for _ in range (q) :
	y, z, d = raw_input().split()
	y, z = int(y), int(z)
	try:
		x = r[z]
		print x
		if d == "L" and y < n and x != -1:
			if x <= y :
				print y-x
			else :
				print n-x + y
		elif d == "R" and y < n and x != -1:
			if x >= y :
				print x-y
			else :
				print n-y + x
		else :
			print "-1"

	except:
		print "-1"
	


