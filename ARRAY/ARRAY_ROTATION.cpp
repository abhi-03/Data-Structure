#include<bits/stdc++.h>
using namespace std;

void leftRotate(int a[],int n)
{
    int i;
    int temp=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
}

 void leftRotate1(int a[],int d,int n)
 {
     for(int i=0;i<d;i++)
     {
         leftRotate(a,n);
     }
 }

 void disp(int a[],int n)
 {
     cout<<"THE REVERTED ARRAY IS"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<endl;
     }
 }

 int main()
 {
     int a[]={1,2,3,4,5,6,7};

     int n=sizeof(a)/sizeof(a[0]);

     leftRotate1(a,2,n);
     disp(a,n);
     return 0;
 }
