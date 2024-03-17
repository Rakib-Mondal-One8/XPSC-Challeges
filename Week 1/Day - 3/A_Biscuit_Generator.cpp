#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    cin>>a>>b>>t;

    if(a > t)
    {
        cout<<"0\n";
    }
    else
    {
        int time = t/a;
        cout<<time*b<<'\n';
    }
    return 0;
}