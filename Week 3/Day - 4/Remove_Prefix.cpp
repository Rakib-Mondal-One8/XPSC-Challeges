#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
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

        vector<int> a(n);
        map<int, int> mp;
        int extraFreq = 0;
        loop(i, 0, n - 1)
        {
            cin >> a[i];
            if (mp[a[i]] >= 1)
                extraFreq++;
            mp[a[i]]++;
        }

        int r = 0;
        int steps = 0;
        while (r < n)
        {
            if (mp[a[r]] >= 1 && extraFreq > 0)
            {
                if (mp[a[r]] > 1)
                {
                    mp[a[r]]--;
                    extraFreq--;
                }   
                steps++;
            }
            r++;
        }
        cout << steps << nline
    }
    return 0;
}