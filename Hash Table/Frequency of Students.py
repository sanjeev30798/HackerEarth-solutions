n=(int)(input())
dict1={}
lt=[]
c=0

while(n>0):
    n-=1
    str1=input()
    if(str1 in dict1.keys()):
        dict1[str1]+=1
    else:
        dict1[str1]=1
    c+=1    

for i in sorted(dict1.keys()):
    print(i,dict1[i])