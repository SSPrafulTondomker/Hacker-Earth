for _ in range (input()):
	    n = input()
	    l = []
	    for i in range (n) :
		x,y = map(int,raw_input().split())
		if x not in l :
			l.append(x)
		if y not in l :
		        l.append(y)				
	    print len(l)
