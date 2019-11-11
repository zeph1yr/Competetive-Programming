t = int(input())

for j in range(0,t):
	count=0
	arr = [0]*128
	n=int(input())
	for i in range(0,n):
		flag=0
		x=arr[i-1]
		for k in range(0,i-1):
			if(arr[k]==x):
				flag=i-k-1

		arr[i]=flag

	temp = arr[n-1]

	for i in range(0,n):
		if(arr[i]==flag):
			count=count+1

	print(count)
	arr*=0


