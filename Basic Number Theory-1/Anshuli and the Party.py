n=(int)(input())
while(n>0):
    n-=1
    a,b=map(int,input().split(" "))
    print(pow(a,b,1000000007))