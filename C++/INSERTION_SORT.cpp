#include<bits/stdc++.h>
using namespace std;

void insertion(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;

        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}

void print(int a[],int n)
{
    int i;
    cout<<"SORTED ARRAY"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
            }
}

int main()
{
    int a[20];
    int n,i;
    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF ARRAY"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion(a,n);
    print(a,n);
    return 0;
}
