import sys
a=[5,4,3,2,1]

for i in range(1,len(a)):
    key=a[i]
    j=i-1

    while j>=0 and a[j]>key:
        a[j+1]=a[j]
        j=j-1
        a[j+1]=key

        print("SORTED ARRAY")
        for i in range(len(a)):
            print("%d" %a[i])