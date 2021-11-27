t = int(input())
while t > 0:
        t -= 1
        N = input()
        A = list(map(int, input().split()))
        total = 0
        for i in A:
            total += i
        result = '2'
        if total % 2 == 0:
            result = '1'
        print(result)