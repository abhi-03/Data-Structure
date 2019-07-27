#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int low,int high,int f)
{
    if(high<low)
    {
        return -1;
    }
int mid=(low+high)/2;

if(f==a[mid])
    return mid;

if(f>a[mid])
    return binarysearch(a,mid+1,high,f);

else
    return binarysearch(a,low,mid-1,f);

}

int findpivot(int a[],int low,int high)
{
    if(high<low)
        return -1;

    if(high==low)
        return low;

    int mid=(low+high)/2;

    if(mid<high && a[mid]>a[mid+1])
        return mid;

    if(mid>low && a[mid]<a[mid-1])
        return mid-1;

    if(a[low]>=a[mid])
        return findpivot(a,low,mid-1);

        else
        return findpivot(a,mid+1,high);
}

int pivotedbinarysearch(int a[],int n,int f)
{
    int pivot=findpivot(a,0,n-1);

    if(pivot==-1)
        return binarysearch(a,0,n-1,f);

        if(a[pivot]==f)
        return pivot;

    if(a[0]<=f)
        return binarysearch(a,0,pivot-1,f);

        else
        return binarysearch(a,pivot+1,n-1,f);
}

int main()
{



int a1[1000];
    int f,i,n,d,j;
      cout<<"ENTER THE NO OF ELEMENTS IN AN ARRAY"<<endl;
    cin>>j;
    cout<<"ENTER THE ELEMENTS OF ARRAY"<<endl;
    for(i=0;i<j;i++)
    {
        cin>>a1[i];
    }

    cout<<"ENTER THE ELEMENT TO BE FOUND"<<endl;
    cin>>f;

     cout << "Index of the element is : " <<
           pivotedbinarysearch(a1, j, f);
    return 0;
}
