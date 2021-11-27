for x in range(int(input())):
    arr2=[]
    a=int(input())
    arr=list(map(int,input().split()))
    arr.sort()
    for x in range(a-1):
        c = arr[x+1] - arr[x]
        arr2.append(c)
    print(min(arr2))