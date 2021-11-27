t = int(input())
while t:
    ans = list()
    n, k = map(int, input().split())
    for i in range(2, k+1):
        ans.append(n % i)
    print(max(ans))
    t -= 1