n=(int)(input())
dict1={}
dict2={}
c1=0
while(n>0):
    n-=1
    str1=(input().split(" "))

    if(str1[0] not in dict1.keys()):
        dict1[str1[0]]=str1[1]

    if(str1[1] not in dict2.keys()):
        dict2[str1[1]]=1
    else:
        dict2[str1[1]]+=1

c1=max(dict2.values())

for i in dict2.keys():
    
    if(dict2[i]==c1):
        print(i)
        break
if("football" in dict2.keys()):
    print(dict2['football'])
else:
    print(0)  