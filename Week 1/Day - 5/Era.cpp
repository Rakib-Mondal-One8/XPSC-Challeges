#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        int operation = 0;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            v.push_back(val);
        }
        int valid = 1;
        for(int i=0;i<n;i++)
        {
            if (valid < v[i])
            {
                operation+= (v[i] - valid);
                valid += (v[i] - valid);
            }
            valid++;
        }
        cout<<operation<<'\n';
    }
    return 0;
}