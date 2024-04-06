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
        multiset<int> s;
        loop(i, 0, n - 1)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                s.insert(a[i]);
            }
        }
        int tmp = a[0];
        loop(i, 1, n - 1)
        {
            tmp ^= a[i];
        }
        int ans = tmp;
        loop(i, 0, n - 1)
        {
            ans = min(ans, tmp ^ a[i]);
        }
        cout << ans << nline
    }
    return 0;
}