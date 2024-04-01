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
        ll n;
        cin >> n;

        ll ans = n;
        ll left = n;
        while (left > 1)
        {
            left = ceil((left - 1 )*1.0/ 2);
            ans += left;
        }
        cout<<ans<<'\n';
    }
    return 0;
}