n = input()
s = map(int,raw_input().split())
k = input()
s.sort()
l = []
for i in s :
	if i not in l :
		if s.count(i) == k:
			print i
			break
