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
        char c;
        cin >> c;
        
        string s;
        cin>>s;
        if (c == 'g')
        {
            cout << "0\n";
            continue;
        }
        int mxg = -1;
        vector<int> gidx;
        vector<int> cidx;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
            {
                gidx.push_back(i+1);
                mxg = max(mxg,i+1);
            }
            if(s[i] == c)
            {
                cidx.push_back(i+1);
            }
        }
        int mxtime = 0;
        for(int i=0;i<cidx.size();i++)
        {
            for(int j=0;j<gidx.size();j++)
            {
                if(gidx[j] > cidx[i])
                {
                    mxtime = max(mxtime,(gidx[j]-cidx[i]));
                    break;
                }
                else if(cidx[i] > mxg)
                {
                    // cout << (n - cidx[i]) + gidx[0]<<"1\n";
                    mxtime = max(mxtime, ((n - cidx[i]) + gidx[0]));
                }
            }
        }
        cout<<mxtime<<"\n";
    }
    return 0;
}