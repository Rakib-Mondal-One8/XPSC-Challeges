#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    priority_queue<int> q;
    q.push(a);
    q.push(b);
    int ans  = 0;
    for(int i=0;i<2;i++)
    {
        int val = q.top();
        q.pop();
        ans+=val;
        q.push(val-1);
    }
    cout<<ans<<"\n";
    return 0;
}