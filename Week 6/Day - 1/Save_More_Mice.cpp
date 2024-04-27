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
        int n, k;
        cin >> n >> k;

        vector<ll> a(k);
        loop(i, 0, k - 1)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        auto ok = [&]()
        {
            ll mice = 0;
            ll cat = 0;
            for (int i = k - 1; i >= 0; i--)
            {
                if (a[i] > cat)
                {
                    mice++;
                    cat += (n - a[i]);
                }
                else
                    break;
            }
            return mice;
        };
        cout << ok() << nl;
        
    }
    return 0;
}