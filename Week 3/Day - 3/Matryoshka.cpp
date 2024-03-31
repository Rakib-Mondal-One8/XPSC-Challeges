#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--)
    {
       int n;
       cin>>n;

       map<int,int>m;
       for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
            m[x+1]--;
       }
       long long ans = 0;
       for(auto it = m.begin();it!=m.end();it++){
            ans+=abs(it->second);
       }
       cout<<ans/2<<'\n';
    }
    return 0;
}