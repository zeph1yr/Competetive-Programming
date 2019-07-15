t=int (input())

while(t!=0):
	t=t-1
	n=int(input())
	k=int(input())
	if(k<n):
		if(n==2):
			if(k%2!=0):
				print(1)
				continue
			else:
				print(0)
				continue
		elif(k==n-1):
			print(2)
			continue
		elif(k>1 and k<n):
			if(k%n == n-(k%n)):
				temp=k%n
				print(temp*2 - 1)
				continue
			else:
				temp= min(k%n, n - (k%n))
				print(temp*2)
				continue
	elif(n==k):
		print(0)
		continue
	elif(n==k*2):
		print(0)
		continue
	elif(k>n):
		if(k%n == n - (k%n)):
			temp=k%n
			print(temp*2 - 1)
			continue
		else:
			temp =min(k%n, n - (k%n))
			print(temp*2)
			continue
