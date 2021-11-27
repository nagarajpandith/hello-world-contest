T= int(input())
for a in range(T):
    p,q,r= map(int, input().split())
    A= sorted(list(map(int, input().split())))
    B= sorted(list(map(int, input().split())))
    C= sorted(list(map(int, input().split())))
    i,j,k,l=(0,0,0,0)
    sum=0
    for ele in B:
        while i<p and A[i]<=ele:
            k+=A[i]
            i+=1
        while j<r and C[j]<=ele:
            l+=C[j]
            j+=1
        sum+= (i*ele +k)*(j*ele+l)
    print(sum%(10**9+7))