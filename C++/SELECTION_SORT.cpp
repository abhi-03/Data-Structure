#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void sorting(int a[],int n)
{
    int i,j,mini;
    for(i=0;i<n-1;i++)
    {
        mini=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[mini])
            {
                mini=j;
            }

        }
        swap(&a[mini],&a[i]);
    }
}

void print(int a[],int n)
{
    int i;
    cout<<"SORTED ARRAY IS"<<endl;
   for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
}

int main()
{
    int n,i;
    int a[20];
    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF ARRAY"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sorting(a,n);
    print(a,n);
    return 0;
}
