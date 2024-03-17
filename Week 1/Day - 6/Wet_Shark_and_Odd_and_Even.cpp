#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    vector<int> v(n);
    long long total = 0;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        v[i] = val;
        total+=val;
    }
    if(total % 2 == 0)
    {
        cout<<total<<'\n';
    }
    else
    {
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(v[i] % 2 != 0)
            {
                total-=v[i];
                break;
            }
        }
        cout<<total<<'\n';
    }
    return 0;
}