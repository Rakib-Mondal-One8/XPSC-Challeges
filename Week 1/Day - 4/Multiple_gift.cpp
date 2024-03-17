#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x,y;
    cin>>x>>y;

    int i=0;
    while(x <= y)
    {
        x = x*2;
        i++;
    }
    cout<<i<<'\n';
    return 0;
}