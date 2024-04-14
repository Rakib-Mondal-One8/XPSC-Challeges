#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
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
        string s;
        cin >> n >> s;

        string tmp(n + 1, '0');
        int ans = 0, mx1 = 0, mx2 = 0;
        loop(i, 0, (n / 2) - 1)
        {
            if (s[i] == s[n - i - 1])
            {
                mx2++;
            }
            else
                ans++;
        }
        if (n % 2 == 1)
        {
            mx1++;
        }
        loop(i, 0, mx2)
        {
            loop(j, 0, mx1)
            {
                tmp[ans +( i * 2 )+ j] = '1';
            }
        }
        cout << tmp << nl;
    }
    return 0;
}

