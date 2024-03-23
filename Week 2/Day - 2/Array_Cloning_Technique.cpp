#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        map<int,int>mp;
        int match = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(mp.find(v[i]) != mp.end()){
                mp[v[i]]++;
            }
            else
                mp.insert({v[i],1});
            match = max(match, mp[v[i]]);
        }
        if(n == match){
            cout<<"0\n";
            continue;
        }
        int req = n;
        int ans = 0;
        while(true){
            ans+=1;
            if(req - match <= match){
                ans += (req - match);
                break;
            }
            ans+=match;
            match+=match;
        }
        cout<<ans<<'\n';              
    }
    return 0;
}