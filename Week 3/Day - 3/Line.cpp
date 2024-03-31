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
       string s;
       cin>>s;

       long long steps = 0;
       vector<int> a(n);
       for(int i=0;i<n;i++){
            int l = i, r = n-i-1;
            if(s[i] == 'R'){
                swap(l,r);
            }
            steps+=l;
            a.push_back(max((r-l),0));
       }
       sort(a.begin(),a.end(),greater<int>());
        for(int i=0;i<n;i++){
            steps+=a[i];
            cout<<steps<<" ";
        }
        cout<<'\n';
    }
    return 0;
}