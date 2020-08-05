n=int(input())
while(n>0):
    n-=1
    s=input().split(" ")
    i=0
    j=len(s)-1
    while(i<j):
        t=s[i]
        s[i]=s[j]
        s[j]=t
        i+=1
        j-=1
    for i in s:
        print(i,end=" ")
    print()