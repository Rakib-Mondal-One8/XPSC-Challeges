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
        ll a, b, n;
        cin >> a >> b >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        ll time = b;
        loop(i, 0, n - 1)
        {
            time += min(a - 1, arr[i]);
        }
        cout << time << nl;
    }
    return 0;
}