#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    stack <int> s;
    s.push(30);
    s.push(20);
    s.push(10);

    while(!s.empty())
    {
        cout<<' '<<s.top();
        s.pop();
    }
}
