#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--)
    {
       int n,m;
       cin>>n>>m;

        vector<string> v;
       for(int i=0;i<n;i++)
       {
            string s;
            cin>>s;
            v.push_back(s);
       }
       int minCost = INT_MAX;
       for(int i=0;i<n-1;i++)
       {
            for(int j=i+1;j<n;j++){
                int cost = 0;
                for(int k=0;k<m;k++)
                {
                    cost+= abs(v[i][k] - v[j][k]);
                }
                minCost = min(minCost,cost);
            }
       }
       cout<<minCost<<"\n";
    }
    return 0;
}