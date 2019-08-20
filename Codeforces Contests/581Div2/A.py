s=input()
 
def binaryToDecimal(n): 
    return int(n,2) 
 
value = binaryToDecimal(s)
 
i=0;
while(1):
    ans=pow(4,i)
    if(ans>=value):break
    i=i+1
 
print(i)
