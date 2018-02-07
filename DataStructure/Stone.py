num = input()
coin = map(int,raw_input().split())
q,x = map(int,raw_input().split())
i = 0
add = 0
flag = 0
l = []
for _ in range (q) :
	Str = raw_input().strip()
	if  Str == 'Harry' :
		l.append(coin[i])
		add += coin[i]
		i += 1
	elif add == x :
		print len(l)
		flag = 1
		break
	else :
		add -= l[-1]
		l.pop()
	print Str,add
if flag == 0 and add != x:
	print "-1"
if add == x:
	print len(l)
		
