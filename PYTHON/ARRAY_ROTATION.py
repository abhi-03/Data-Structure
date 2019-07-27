from array import *

def rotation(a,n):
    temp=a[0]
    for i in range(n-1):
        a[i]=a[i+1]

    a[n-1]=temp

def  rotate(a,d,n):
     for i in range (d):
         rotation(a,n)

def  disp(a,n):
     for i in range(n):
         print("% d" % a[i], end=" ")

a=array('i',[])

f=int(input("ENTER THE LENGTH OF ARRAY"))

for i in range(f):
     x=int(input("ENTER THE NEXT VALUE"))
     a.append(x)
d=int(input("ENTER VALUE FOR D"))
rotate(a,d,f)
disp(a,f)


