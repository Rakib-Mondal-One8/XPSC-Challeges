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
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;

        int i = 0;
        while (i < n - 1)
        {
            if (s[i] != s[i + 1])
            {
                n -= 2;
                s.erase(i, 2);
                cnt++;
                i = 0;
            }
            else
            {
                i++;
            }
        }
        (cnt % 2 == 0) ? cout << "Ramos\n" : cout << "Zlatan\n";
    }
    return 0;
}