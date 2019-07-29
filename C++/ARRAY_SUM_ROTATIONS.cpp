#include<bits/stdc++.h>
using namespace std;

bool pairInRotate(int a[],int n,int x)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            break;
    }

int l=(l+1)%n;
//cout<<"VALUE OF L"<<endl;
//cout<<l<<endl;


int r=i;
//cout<<"VALUE OF R"<<endl;
//cout<<r<<endl;

while(l!=r)
{
    if(a[l]+a[r]==x)
    {


        return true;
    }
    if(a[l]+a[r]<x)
     {


        l=(l+1)%n;

     }
        if(a[l]+a[r]>x)
      {


        r=(n+r-1)%n;

      }
        }
    return false;
    }

    int main()
    {
        int a[20],n,f,i;
        cout<<"ENTER THE NO OF ARRAY"<<endl;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"ENTER THE SUM"<<endl;
        cin>>f;
        if(pairInRotate(a,n,f))
            cout<<"ARRAY HAS 2 ELEMENTS WITH SUM ="<<f<<endl;
        else
            cout<<"NOT PRESENT"<<endl;
    }

