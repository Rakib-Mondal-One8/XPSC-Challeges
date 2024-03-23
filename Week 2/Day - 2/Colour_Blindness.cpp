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

        string s1;
        string s2;
        cin>>s1>>s2;
        for (int i = 0; i < n; i++)
        {
            if (s2[i] == 'B')
                s2[i] = 'G';
            if (s1[i] == 'B')
                s1[i] = 'G';
        }
        // cout<<s1<<s2<<'\n';
        if (s1 == s2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}