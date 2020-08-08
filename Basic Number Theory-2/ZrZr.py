import math
n=int(input())
while(n>0):
    n-=1
    a=int(input())
    c=0
    i=5
    while(a//i>=1):
        c+=a//i
        i*=5
    print(c)