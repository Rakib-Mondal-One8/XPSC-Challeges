#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        k = k % (n + 1); // Calculating Shifts
        vector<ll> a(n + 1);
        ll sum = 0;
        loop(i, 1, n)
        {
            int val;
            cin >> val;
            a[i] = val;
            sum += val;
        }
        ll miss = n * (n + 1) / 2 - sum;
        a[0] = miss;
        loop(i, 1, n)
        {
            cout << a[(i + n + 1 - k) % (n + 1)] << " ";
        }
        cout << nl;
    }
    return 0;
}