#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
const int MXN = 1e4 + 9;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<ll> a;
    loop(i, 1, MXN)
    {
        a.push_back(pow(i, 3));
    }
    while (t--)
    {
        ll x;
        cin >> x;

        bool ans = false;
        loop(i, 0, MXN-1)
        {
            if(a[i] >= x){
                break;
            }
            ll want = (x - a[i]);
            int l = 0, r = a.size()-1;
            bool ok = false;

            while (l <= r)
            {
                ll mid = l + (r - l + 1) / 2;
                if (a[mid] == want)
                {
                    ok = true;
                    break;
                }
                else if (a[mid] > want)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ok){
                ans = true;
                break;
            }
        }
        (ans) ? Yes : No;
        // cout << nl;
    }
    return 0;
}