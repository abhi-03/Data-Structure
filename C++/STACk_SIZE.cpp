#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int c=0;
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty())
    {
        s.pop();
        c++;
    }
    cout<<"THE SIZE IS"<<' ' <<c;
    return 0;
}
