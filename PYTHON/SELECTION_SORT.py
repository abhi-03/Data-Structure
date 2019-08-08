import sys

a=[5,4,3,2,1]

for i in range(len(a)):
    mini=i

    for j in range(i+1,len(a)):
        if(a[mini]>a[j]):
            mini=j


    a[i],a[mini]=a[mini],a[i]


    print("SORTED ARRAY")
    for i in range(len(a)):
        print("%d" %a[i])

