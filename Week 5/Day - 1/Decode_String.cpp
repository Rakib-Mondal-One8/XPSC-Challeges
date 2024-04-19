#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
char c(int i)
{
    return 'a' + i - 1;
}
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
        string s, ans = "";
        cin >> s;

        int i = n - 1;
        while (i >= 0)
        {
            if (s[i] != '0')
            {
                ans += c(s[i] - '0');
                i--;
            }
            else
            {
                ans += c(stoi(s.substr(i - 2, 2)));
                i -= 3;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << nl;
    }
    return 0;
}
    