#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
const int N = 1e6 + 5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> prime(N, true);
    set<ll> sq;
    for (ll i = 2; i * i <= N; i++)
    {
        if (prime[i])
        {
            for (ll j = i + i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (prime[i])
            sq.insert(1LL * i * i);
    }
    int n;
    cin >> n;
    vector<ll> a(n);
    loop(i, 0, n - 1)
    {
        cin >> a[i];
        if (sq.find(a[i]) != sq.end())
            Yes;
        else
            No;
    }

    return 0;
}