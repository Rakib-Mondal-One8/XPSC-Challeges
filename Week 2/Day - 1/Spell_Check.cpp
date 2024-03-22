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
        string s;
        cin >> n >> s;
        string tmp = "Timur";
        map<char, int> mp;
        for (char c : tmp)
        {
            mp[c]++;
        }
        if(n > 5 || n < 5)
        {
            cout<<"NO\n";
            continue;
        }
        bool flag = true;
        for(char c : s)
        {
            if(mp.find(c) != mp.end())
            {
                if(mp[c] != 1)
                {
                    flag = false;
                    break;
                }
                else
                {
                    mp[c]--;
                }
            }
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}