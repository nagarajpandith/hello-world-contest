for t in range(int(input())):
     c=0
     n,k=map(int,input().split(' '))
     a=[int(i) for i in input().split()]
     for j in a:
          if (j+k)%7==0:
               c+=1
     print(c)