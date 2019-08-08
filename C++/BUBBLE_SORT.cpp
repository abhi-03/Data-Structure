#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void bubble(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

void print(int a[],int n)
{
    int i;
    cout<<"SORTED ARRAY USING BUBBLE SORT"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{

 int a[20];
 int i,n;

cout<<"ENTER THE SIZE OF ARRAY"<<endl;
cin>>n;
cout<<"ENTER THE ELEMENTS OF ARRAY"<<endl;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
bubble(a,n);
print(a,n);
}
