k=int(input())
minimum=[0,0,2,5]
maximum=[0,0,2,5]
n=4
while n<40:
    min_values=[]
    max_values=[]
    for i in range(1,(n//2)+1):
        min_values.append(minimum[i]+minimum[n-i])
        max_values.append(maximum[i]+maximum[n-i])
    minimum.append(n+min(min_values))
    maximum.append(n+max(max_values))
    n+=1
for i in range(k):
    a,b=map(int,input().split())
    if b<minimum[a+1]:
        print(-1)
    elif b<maximum[a+1]:
        print(0)
    else:
        print(b-maximum[a+1])