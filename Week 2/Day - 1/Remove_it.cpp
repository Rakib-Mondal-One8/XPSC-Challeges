#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;

    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int val : v)
    {
        if(val != x)
        {
            cout<<val<<" ";
        }
    }
    cout<<'\n';
    return 0;
}