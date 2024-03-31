#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<
#define no cout<<"NO"<<
#define nline '\n';
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

       priority_queue<int>q;
       ll ans = 0;
       for(int i=0;i<n;i++){
            ll val ;
            cin>>val;
            q.push(val);
            if(val == 0){
                ans+=q.top();
                q.pop();
            }
       }
       cout<<ans<<'\n';
    }
    return 0;
}