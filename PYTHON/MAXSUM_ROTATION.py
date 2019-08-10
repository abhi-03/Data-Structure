import sys

a=[8,3,1,2]
amax=0

for i in range(len(a)):
    amax +=a[i]

    curv=0
    for i in range(len(a)):
        curv +=(i*a[i])

    res=curv

    for i in range(1,len(a)):
        nextv=curv-(amax-a[i-1])+a[i-1]*(len(a)-1)
        curv=nextv
        res=max(res,nextv)

print("THE MAXIMUM VALUE")
print("%d" %res)
