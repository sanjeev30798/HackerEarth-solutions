n=(int)(input())
while(n>0):
    n-=1
    s1=input()
    s2=input()
    dict1={}
    dict2={}
    for i in range(97,123):
        dict1[chr(i)]=0
        dict2[chr(i)]=0
    for i in s1:
        dict1[i]+=1
    for i in s2:
        dict2[i]+=1
    diff=0
    for j in range(97,123):
        diff+=abs(dict1[chr(j)]-dict2[chr(j)])
    print(diff)