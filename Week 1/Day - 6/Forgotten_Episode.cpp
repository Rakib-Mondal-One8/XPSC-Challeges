#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    vector<bool> v(n+5);
    for(int i=0;i<n-1;i++)
    {
        int val;
        cin>>val;
        v[val] = true;
    }
    int l=1,r=n;
    while(l <= r)
    {
        if(v[l] == false)
        {
            cout << l << '\n';
            break;
        }
        if(v[r] == false)
        {
            cout<<r<<'\n';
            break;
        }
        l++;
        r--;
    }
    return 0;
}