#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    int l=0,r=0;
    while(l<n || r<m)
    {
        while(l < n && r >= m)
        {
            cout<<a[l]<<" ";
            l++;
        }
        while(r < m && l >= n)
        {
            cout<<b[r]<<" ";
            r++;
        }
        while(l<n && a[l] <= b[r])
        {
            cout<<a[l]<<" ";
            l++;
        }
        while(r < m && b[r] <= a[l])
        {
            cout<<b[r]<<" ";
            r++;
        }
    }
    
    return 0;
}