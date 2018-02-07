n = input()
s = map(int,raw_input().split())
s.sort()
d = 0
for i in s :
	d += i
print d-s[n-1],d-s[0]
