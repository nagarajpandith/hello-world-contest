t=int(input())
while t>0:
    n,x=map(int, input().split())
    strg=set(map(int, input().split()))
    if len(strg)<=n-x:
        print(len(strg))
    else:
        print(n-x)
    t-=1