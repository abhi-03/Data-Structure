#include<bits/stdc++.h>
using namespace std;

int max1(int a[],int n)
{
    int i,asum=0,curv=0;
    for(i=0;i<n;i++)
    {
        asum=asum+a[i];
        curv=curv+(i*a[i]);
    }
    int res=curv;
    for(i=1;i<n;i++)
    {
        int nextv=curv-(asum-a[i-1])+a[i-1]*(n-1);

        curv=nextv;

    res=max(res,nextv);
}
return res;
}

int main()
{
    int i,n,a[20];
    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF ARRAY"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"THE MAXIMUM SUM IS"<<endl;
    cout<<max1(a,n);
    return 0;
}
